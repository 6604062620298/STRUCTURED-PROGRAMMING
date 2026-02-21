#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps);

int main() {
    char login[64], password[64];

    printf("Enter login : ");
    fgets(login, sizeof(login), stdin);
    login[strcspn(login,"\n")] = 0;

    printf("Enter password : ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password,"\n")] = 0;

    if(checkLogin(login, password) == 1) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }

    if(checkValidPass(password)) {
        printf("Accepted\n");
    } else {
        printf("Reject\n");
    }
}

int checkValidPass(char *ps) {
    int len = strlen(ps);
    int digit = 0;
    int upper = 0;
    int upperUsed[26] = {0};   // เช็ค uppercase ซ้ำ

    for(int i = 0; i < len; i++) {
        if(isdigit(ps[i]))
            digit++;

        if(isupper(ps[i])) {
            upper++;
            upperUsed[ps[i] - 'A']++;
        }
    }

    // ---------- 4.1 ----------
    if(len == 5 && digit >= 1)
        return 1;

    // ---------- 4.2 ----------
    if(len >= 5 && len <= 8 &&
       !isdigit(ps[0]) &&
       upper >= 2 &&
       digit >= 2)
        return 1;

    // ---------- 4.3 ----------
    int repeatUpper = 0;
    for(int i = 0; i < 26; i++) {
        if(upperUsed[i] > 1)
            repeatUpper = 1;
    }

    if(len >= 5 && len <= 8 &&
       upper >= 2 &&
       digit >= 2 &&
       !repeatUpper)
        return 1;

    return 0;
}

int checkLogin(char *login, char *passwd) {
    if(!strcmp(login, "student1") && !strcmp(passwd, "mypass"))
        return 1;
    else
        return 0;
}

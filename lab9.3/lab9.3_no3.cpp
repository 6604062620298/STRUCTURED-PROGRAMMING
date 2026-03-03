#include <stdio.h>
#include <string.h>
int checkLogin(char *login, char *passwd, char *logindb, char *passdb); 

int main() {
	char login[5][64]={"user1","user2","user3","user4","user5"};
	char password[5][64]={"pass1","pass2","pass3","pass4","pass5"};

    char inputuser[64];
    char inputpassword[64];
    int found = 0;

    printf("input username: ");
    scanf("%s", inputuser);

    printf("input password: ");
    scanf("%s", inputpassword);

    for(int i = 0; i < 5; i++){
        if(checkLogin(inputuser, inputpassword, login[i], password[i])){
            found = 1;
            break;
        }
    }
    if(found){
        printf("Welcome");
    }else{
        printf("Incorrect login or password");
    }
}

int checkLogin(char *login, char *passwd, char *logindb, char *passdb){
    if(strcmp(login, logindb) == 0 && strcmp(passwd, passdb) == 0){
        return 1;
    }else{
        return 0;
    }
}

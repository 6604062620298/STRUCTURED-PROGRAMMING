#include <stdio.h>
#include <string.h>
#include <ctype.h>
int checkLogin(char *login, char *passwd);
//accepted only if Length = 5 and a number 1 or more digits
int checkValidPass(char *ps);

int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);
	if( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
	if (checkValidPass(password)) {
		//if Password is valid
		printf("Accepted\n");
    }else{
		printf("Reject\n");
	}
}
int checkValidPass(char *ps) {
	int accepted = 0;
    int digital = 0;
    int upper = 0;
    char upperchar[10];
    int upperindex = 0;
	int length = strlen(ps);
    
    if(length < 5 || length > 8){
        accepted = 0;
    }
    if(ps[0] >= '0' && ps[0] <= '9'){
        accepted = 0;
    }
    for(int i = 0; ps[i] != '\0'; i++){
        if(ps[i] >= '0' && ps[i] <= '9'){
            digital++;
        }
        if(ps[i] >= 'A' && ps[i] <= 'Z'){
            for(int j = 0; j < upperindex; j++){
                if(ps[i] == upperchar[j]){
                    return 0;
                }
            }
            upperchar[upperindex++] = ps[i];
            upper++;
        }
    }
    if(digital >= 2 && upper >= 2){
        accepted = 1;
    }

	return accepted;
}
// 4.1
// int checkValidPass(char *ps) {
// 	int accepted=0;
//     int digital = 0;
// 	int length = strlen(ps);
//     for(int i = 0; ps[i] != '\0'; i++){
//         if(ps[i] >= '0' && ps[i] <= '9'){
//             digital = 1;
//             break;
//         }
//     }
//     if(length == 5 && digital == 1){
//         accepted = 1;
//     }
// 	return accepted;
// }

// 4.2
// int checkValidPass(char *ps) {
// 	int accepted = 0;
//     int digital = 0;
//     int upper = 0;
// 	int length = strlen(ps);
    
//     if(length < 5 || length > 8){
//         accepted = 0;
//     }
//     if(ps[0] >= '0' && ps[0] <= '9'){
//         accepted = 0;
//     }
//     for(int i = 0; ps[i] != '\0'; i++){
//         if(ps[i] >= '0' && ps[i] <= '9'){
//             digital++;
//         }
//         if(ps[i] >= 'A' && ps[i] <= 'Z'){
//             upper++;
//         }
//     }
//     if(digital >= 2 || upper >= 2){
//         accepted = 1;
//     }

// 	return accepted;
// }

int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "mypass"))
		return 1;
	else
		return 0;
}
#include<stdio.h>
int main(){
	char x;
	while(true){
		scanf("%s",&x);
		switch(x){
			case 'x':
				printf("HI x\n");
				break;
			case 'y':
				printf("HI y");
				break;
			case 'z':
				return(0);
		}
	}
}

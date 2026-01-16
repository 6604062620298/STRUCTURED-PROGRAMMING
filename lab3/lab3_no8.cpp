#include <stdio.h>

int main(){
	
	int hour, minute, second, moreminute;
	scanf("%d:%d:%d",&hour,&minute,&second);
	printf("Hour:%d\nMinute:%d\nsecond:%d\n",hour,minute,second);
	minute += hour*60;
	
	printf("Next minutes: "); scanf("%d",&moreminute);
	minute += moreminute;
	hour = minute/60;
	minute %= 60;
	(hour>23)?hour-=24:0;
	
	
	printf("Hour:%d\nMinute:%d\nsecond:%d\n",hour,minute,second);
	
	return 0;
}
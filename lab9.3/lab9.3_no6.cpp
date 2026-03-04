#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char str1[100], str2[100], str_rem[100], del[100];
    int i = 0, j = 0, d = 0, number = 0;

    printf ("Target: ");
    fflush (stdin);
    gets (str1);

    printf ("Enter string: ");
    gets (str2);

    for (i = 0; str1[i]!= '\0'; i++)
    {
        int count = 0;
        int k = 0;
        for (j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j]){
                count++;
			}else{
				str_rem[k++] = str2[j];
			}
        }
        str_rem[k] = '\0';
        strcpy(str2, str_rem);
        if(count > 0){
            printf("%c -> %d unit\n",str1[i],count);
		}	
    }
    printf("Not found: %s", str2);
    return 0;
}
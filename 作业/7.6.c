#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;  
    char str1[100],str2[100];  
    gets(str1);  
    gets(str2);  
    for(i=0; str1[i]!='\0'; i++);  
    for(j=0; str2[j]!='\0'; j++)  
    {  
        str1[i]=str2[j];  
        i++;  
    }  
    str1[i]='\0';  
    puts(str1);  
	return 0;
}

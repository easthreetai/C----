#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i,j;
    char a[100],b[100];
    gets(a); 
    
    for(i=0,j=0;i<strlen(a);i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
         b[j++]=a[i];
    }
       
    puts(b);
    return 0;
}

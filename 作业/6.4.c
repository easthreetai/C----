#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int a[11]={1,4,6,9,13,16,19,28,40,100};
    int t,i=0,j=0;
    scanf("%d",&t);
    for(i=9;i>=0;i--)
    {
       if(t<a[i])
			 {
            a[i+1] = a[i];
       }else{
             a[i+1] = t;
             break;      
       }
    }
    for(i=0;i<11;i++)
    {
        printf("%d\t",a[i]);              
     }
  system("pause"); 
	return 0;
}

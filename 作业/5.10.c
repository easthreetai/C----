#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a=2,b=1,s=0;
	int t,n=20,i; 
	for(i=1;i<=n;i++)
	{
		s=s+a/b;
		t=a;
		a=a+b;
		b=t;
	}
	printf("sum=%9.6f\n",s);
	return 0;
}

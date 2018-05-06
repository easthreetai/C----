#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,s,i;
	for(n=2;n<1000;n++)
	{
		s=0;
		for(i=1;i<n;i++)
		if((n%i)==0)
		s=s+i;
		if(s==n){
			printf("%3d its factors are",n);
			for(i=1;i<n;i++)
			if((n%i)==0)
			printf(",%d",i);
			printf("\n");
		}
	 } 
	return 0;
}

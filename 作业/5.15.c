#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x0,x1,x2,f0,f1,f2;
	do
	{
		printf("enter x1,x2:");
		scanf("%f,%f",&x1,&x2);
		f1=x1*((2*x1-4)*x1+3)-6;
		f2=x2*((2*x2-4)*x2+3)-6;
	}
	while(f1*f2>0);
	do
	{
		x0=(x1+x2)/2;
		f0=x0*((2*x0-4)*x0+3)-6;
		if((f0*f1)<0)
		{
			x2=x0;
			f2=f0;
		}
		else
		{
			x1=x0;
			f1=f0;
		}
	}
	while(fabs(f0)>=1e-5);
	printf("x=%5.2f\n",x0);
	return 0;
}

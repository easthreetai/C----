#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,x0,f,f1;
	x=1.5;
	do
	{
		x0=x;
		f=((2*x0-4)*x0+3)*x0-6;
		f1=(6*x0-8)*x0+3;
		x=x0-f/f1;
	}
	while(fabs(x-x0)>=1e-5);
	printf("1.5附近的根为:%5.2f\n",x);
	return 0;
}

#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sign=1;
	double pi=0.0,n=1.0,term=1.0;
	while(fabs(term)>=1e-8){
		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
	}
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	return 0;
}

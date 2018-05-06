#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int day=9,x1,x2=1;
	while(day>0)
	{
		x1=(x2+1)*2;
		x2=x1;
		day--; 
	 } 
	 printf("第1天共摘了%d个果子\n",x1);
	return 0;
}

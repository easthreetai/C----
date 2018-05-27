#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	char a[]={'*','*','*','*','*'},space=' ';
	for(i=0;i<5;i++)
	{for(j=1;j<=2*i;j++)
	printf("%c",space);
	for(j=0;j<5;j++)
	printf("%2c",a[i]);
	printf("\n");
}
	return 0;
}

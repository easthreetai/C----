#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,n,sn=0,term=0,i=1;
	printf("������a,n��ֵ:");
	scanf("%d,%d",&a,&n);
	for(i=1;i<=n;++i) 
	{
		term=10*term+a;
		sn=sn+term;
	}
	printf("sn��ֵΪ��%d\n",sn);
	return 0;
}

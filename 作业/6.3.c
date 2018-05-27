#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j,sum,m=0,sum1=0,sum2=0;
	printf("array a:\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("%4d",a[i][j]);
		m=m+1;
	}
	if(m%3==0)
	printf("\n");
}
sum1=a[0][0]+a[1][1]+a[2][2];
sum2=a[0][2]+a[1][1]+a[2][0];
sum=sum1+sum2;
printf("对角线元素之和为%d",sum);
	return 0;
}

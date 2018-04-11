#include <stdio.h>
int main()
{
	int x;
	double y;
	printf("请输入一个小于1000的正数:\n");
	scanf("%d",&x);
	if(x>0&&x<1000){
		y=sqrt(x);
		printf("它的平方根是:%.0f\n",y);
	}else{
		printf("请按要求重新输入:\n");
	}
	return 0;
}

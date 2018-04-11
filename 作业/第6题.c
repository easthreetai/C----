#include <stdio.h>
int main()
{
	int x,y;
	printf("请输入x的值:");
	scanf("%d",&x);
	if(x<1){
		y=x;
	}else if(x<10){
		y=2*x-1;
	}else{
		y=3*x-11;
	}
	printf("函数的值为:y=%d\n",y);
	return 0;
}

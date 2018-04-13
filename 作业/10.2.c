#include <stdio.h>
int main()
{
	float I,x;
	int c;
	printf("请输入当月利润:");
	scanf("%f",&I);
	if(c>10){
		c=10;
	}else{
		c=I/100000;
	}
	switch(c)
	{
		case 0: x=I*0.1;break;
		case 1: x=10000+(I-100000)*0.075;break;
		case 2:
		case 3:x=10000+7500+(I-200000)*0.05;break;
		case 4:
		case 5:x=10000+7500+10000+(I-400000)*0.03;break;
		case 6:
		case 7:
		case 8:
		case 9:x=10000+7500+10000+6000+(I-600000)*0.015;break;
		case 10:x=10000+7500+10000+6000+6000+(I-1000000)*0.01;break;
	}
	printf("当月应发奖金为:%.2f\n",x);
	return 0;
}

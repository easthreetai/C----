#include <stdio.h>
int main()
{
	int x;
	double y;
	printf("������һ��С��1000������:\n");
	scanf("%d",&x);
	if(x>0&&x<1000){
		y=sqrt(x);
		printf("����ƽ������:%.0f\n",y);
	}else{
		printf("�밴Ҫ����������:\n");
	}
	return 0;
}

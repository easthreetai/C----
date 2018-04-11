#include <stdio.h>
int main()
{
	int x;
	printf("ÇëÊäÈë³É¼¨:");
	scanf("%d",&x);
	if(x>=90){
		printf("A");
	}else if(x>=80){
		printf("B");
	}else if(x>=70){
		printf("C");
	}else if(x>=60){
		printf("D");
	}else{
		printf("E");
	}
	return 0;
}

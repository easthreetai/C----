#include <stdio.h> 
#define PI 3.1415926
int main()
{
	float r,area;
	printf("ÇëÊäÈë°ë¾¶:\n");
	scanf("%f",&r);
	area=PI*r*r;
	printf("PI=%.7f,r=%.0f\narea=%.7f\n",PI,r,area);
	return 0;
}

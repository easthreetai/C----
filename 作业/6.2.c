#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,min,t,a[11];
	printf("enter data:\n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("The Orignal numbers:\n");
	for(i=1;i<=10;i++)
	printf("%5d",a[i]);
	printf("\n");
	for(i=1;i<=9;i++)
{
		min=i;
		for(j=i+1;j<=10;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
    }
	t=a[i];
	a[i]=a[min];
	a[min]=t;
}
printf("\nThe sorted numbers:\n");
for(i=1;i<=10;i++)
printf("%5d",a[i]);
printf("\n");
	return 0;
}

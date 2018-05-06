# include <stdio.h>
int main()
{
	int m,n,i=1,j,s;
	printf("请输入两个正整数:");
	scanf("%d,%d",&m,&n);
	for(;i<=m&&i<=n;i++)
	{
		if(m%i==0&&n%i==0)
		s=i;
	}
	if(m>=n)
	j=m;
	else j=n;
	for(;!(j%m==0&&j%n==0);j++);
	printf("s=%d,j=%d\n",s,j);
	return 0;
}

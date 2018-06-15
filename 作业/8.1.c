#include <stdio.h>
void main()
{
int a,b,c,x;
int *pa,*pb,*pc;
pa=&a;
pb=&b;
pc=&c;
printf("请输入3个整数\n");
scanf("%d%d%d",pa,pb,pc);
if(*pa>*pb)
{
x=*pa;
*pa=*pb;
*pb=x;
}
if(*pa>*pc)
{
x=*pa;
*pa=*pc;
*pc=x;
}
if(*pb>*pc)
{
x=*pb;
*pb=*pc;
*pc=x;
}
printf("这3个数由小到大的排列顺序为%d,%d,%d",*pa,*pb,*pc);
}

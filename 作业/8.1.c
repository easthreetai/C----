#include <stdio.h>
void main()
{
int a,b,c,x;
int *pa,*pb,*pc;
pa=&a;
pb=&b;
pc=&c;
printf("������3������\n");
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
printf("��3������С���������˳��Ϊ%d,%d,%d",*pa,*pb,*pc);
}

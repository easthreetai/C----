#include <stdio.h>
char addsp(int x, char y[]);          //�����ַ��������
int main()
{
    int a;
    char b[7];
    scanf("%d", &a);                  //��������
    b[7]=addsp(a, b);                 //�����ַ��������
    puts(b);                          //������
    return 0;
}
//�ַ��������
char addsp(int x, char y[])
{
    int i, j;
    char m[4];
    m[0]=x/1000;
    m[1]=(x-m[0]*1000)/100;
    m[2]=(x-m[0]*1000-m[1]*100)/10;
    m[3]=x-m[0]*1000-m[1]*100-m[2]*10;
    for (i=0, j=0; i<4; i++, j++)
        m[i]=m[j]+'0';
    for (i=0, j=0; i<7; i++){
        if (i==2*j){
            y[i]=m[i/2];
            j++;
        }
        else
            y[i]=' ';
    }
    y[i]='\0';
    return y[i];
}

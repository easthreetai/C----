#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>  
#include<stdlib.h>  
#include<math.h>  
#include<string.h>  
#include<Windows.h>  
#include<stdio.h>  
  
void fltj(char str[], int a[])  
{  
    int ll, i;  
    ll = strlen(str);  
    for (i = 0; i < ll; i++)  
    {  
        if ((64 < str[i] &&str[i]< 91) ||(96 < str[i] &&str[i]< 123)) a[0]++;  
        else if (47 < str[i]&& str[i]< 58)a[1]++;  
        else if (str[i] == 32) a[2]++;  
        else a[3]++;  
    }  
}  
  
void main()  
{  
    static char str[60];  
    static int a[4] = { 0, 0, 0, 0 };  
    gets(str);  
    fltj(str, a);  
    printf("%s char:%d digit:%d space:%d other:%d", str, a[0], a[1], a[2], a[3]);  
    system("pause");  
}  

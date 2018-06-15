#include <stdio.h>
#include <windows.h>

void put_longest_string(char *p)
{
    char *p1 = p;
    char *p2 = p;
    char *ret = p;
    int count1 = 0;
    int count2 = 0;
    while (*p2!='\0')
    {
        count1++;
        if (*p2 == ' ')
        {
            *p2 = '\0';
            p2++;   
            if (count2 < count1)
            {
                count2 = count1;
                ret = p1;
            }
            p1 = p2;
            count1 = 0;
        }
        else
        {
            p2++;
        }
    }
    puts(ret);
}

int main()
{

    char ch[30] = { 0 };
    gets(ch);
    put_longest_string(ch);
    system("pause");
    return 0;
}

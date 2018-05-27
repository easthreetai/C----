#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s1[80],s2[80];
  int i;
  printf("input s2:");
  scanf("%s",s2);
  for (i=0;i<=strlen(s2);i++)
     s1[i]=s2[i];
  printf("s1:%s\n",s1);
	return 0;
}

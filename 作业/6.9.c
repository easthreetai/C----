#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int a[15] = {99, 97, 87, 76, 65, 63, 59, 58, 51, 43, 32, 31, 28, 15, 6};
    int x, low, high, mid, n;
    n = 15;
    low = 0;
    high = n - 1;
    scanf("%d", &x);
    while (low <= high){
        mid = (low + high) / 2;
        if (x > a[mid])
            high = mid - 1;
        else if (x < a[mid])
            low = mid + 1;
        else if (x == a[mid]){
            printf("%d是第%d个元素的值\n", x, mid+1);
            break;
        }
    }
    if (x != a[mid])
    printf("无此数\n");
	return 0;
}

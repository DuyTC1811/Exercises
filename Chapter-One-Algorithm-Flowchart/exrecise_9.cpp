#include <stdio.h>

int main() {
    int n;
    do {
       printf("Enter number: ");
        scanf("%d", &n);
        if (n < 1) {
           printf("please enter number :");
        }
    } while (n < 1);

    int sum = 1;
    for (int i = 1; i <= n; ++i) {
        sum = sum * i;
    }
    printf("Total 1 * 2 * 3... is = %d", sum);
    return 0;
}

#include <stdio.h>

int main() {
    int n;
    int x;
    do {
        printf("Enter number x : ");
        scanf("%d", &x);
        if (x < 1) {
            printf("please enter a positive > 1\n");
        }
        printf("Enter number n : ");
        scanf("%d", &n);
        if (n < 1) {
            printf("please enter a positive > 1\n");
        }
    } while (n < 1 || x < 1);

    int sum = 0;
    int T = 1;
    for (int i = 1; i <= n; ++i) {
        T = T * x;
        sum = sum + T;
    }

    printf("Total x ^ 2 + x ^ 3... is = %d", sum);
    return 0;
}

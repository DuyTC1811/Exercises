#include <stdio.h>

float exponential(float x, int n) {
    if (n == 1) {
        return x;
    } else {
        return x * exponential(x, n - 1);
    }
}
int main() {
    int n;
    int x;
    do {
        printf("Enter number n : ");
        scanf("%d", &n);
        printf("Enter number x : ");
        scanf("%d", &x);
        if (n < 1 || x < 1) {
            printf("please enter a positive > 1\n");
        }
    } while (n < 1 || x < 1);

    float sum = exponential(n, x);
    printf("Total (x, n) = x ^ n is = %f", sum);
    return 0;
}

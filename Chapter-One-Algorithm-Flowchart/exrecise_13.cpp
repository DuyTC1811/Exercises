#include <stdio.h>
#include <math.h>

int main() {
    int x;
    int n;
    printf("Enter number x : ");
    scanf("%d", &x);
    printf("Enter number n : ");
    scanf("%d", &n);

    float sum = 0, T = 1;
    for (int i = 1; i <= n; ++i) {
        T = T + pow(x, (i * 2));
        sum = sum + T;
    }

    printf("Total x ^ 2 + x ^ 4... is = %f", sum);
    return 0;
}

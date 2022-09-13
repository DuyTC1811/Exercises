#include <stdio.h>

int main() {
    int n;
    do {
        printf("Enter number : ");
        scanf("%d", &n);
        if (n < 1) {
            printf("pase enter positive > 1\n");
        }

    } while (n < 1);
    float sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += (1.0 / (i * 2));
    }
    printf("Sum 1/2 + 1/4 + 1/6 = is %.2f", sum);
    return 0;
}

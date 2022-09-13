#include <stdio.h>

int main() {
    int n;
    do {
        printf("Enter number : ");
        scanf("%d", &n);
        if (n < 1) {
            printf("please enter a positive > 1\n");
        }
    } while (n < 1);
    float sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += (1.0 / (i * 2 - 1));
    }
    printf("Total 1/3 + 1/5 + 1/7 is = %.2f", sum);
    return 0;
}

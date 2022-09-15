#include <stdio.h>

int main() {
    int n;
    float p = 1;
    do {
        printf("Enter number : ");
        scanf("%d", &n);
        if (n < 1) {
            printf("please enter a positive > 1\n");
        }
    } while (n < 1);
    float sum = 0;
    for (int i = 1; i <= n; ++i) {
        p = p * i;
        sum += p;
    }
    printf("Total 1 + 1.2 + 1.3... is = %f", sum);
    return 0;
}

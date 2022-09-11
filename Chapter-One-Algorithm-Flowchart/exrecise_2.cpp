#include <stdio.h>

int main() {
    printf("Enter numner : ");
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("please enter a positive integer");
        return 0;
    }
    int total = 0;
    for (int i = 1; i <= n; ++i) {
        total += (i * i); 
    }
    printf("Total 1^2 + 2^2 is = %d", total);
    return 0;
}

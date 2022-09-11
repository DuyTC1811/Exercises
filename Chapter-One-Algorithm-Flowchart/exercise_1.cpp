#include <stdio.h>

int main() {
  printf("Enter number n :");
  int n = 0;
  scanf("%d", &n);
  int total = 0;
  for (int i = 1; i <= n; ++i) {
    total += i;
  }
  printf("Total number n %d: is = %d", n, total);
  return 0;
}

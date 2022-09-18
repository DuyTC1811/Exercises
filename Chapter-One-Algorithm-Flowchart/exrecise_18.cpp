#include <iostream>	
#include <math.h>
using namespace std;

int main() {
    int x;
    int n;
    cout << "Enter number x : ";
    cin >> x;
    cout << "Enter number n : ";
    cin >> n;


    float N = 1;
    float sum = 0;
    float T = 0;
    float M = 0;
    for (int i = 1; i <= n; ++i) {
        T = T + pow(x, (2 * i));
        M = M + (i * 2);
        N = N * M * (M - 1);
        sum = sum + T / N;
    }
    cout << "Total = 1 + x ^ 2 / 2! + x ^ 4 / 4! + .... + x^2n/(2n)! " << sum << endl;
    return 0;
}

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


    float T = 0;
    float M = 0;
    float N = 1;
    float sum = 1;
    for (int i = 1; i <= n; ++i) {
        T = T + pow(x, (2 * i + 1));
        M = M + (i * 2 + 1);
        N = N * M * (M - 1);
        sum = sum + x + T / N; 
    }

    cout << "Total = 1 + x + x ^ 3 / 3! + x ^ 5/5! + … + x ^ (2n+1) / (2n+1)!" << sum << endl;
    return 0;
}

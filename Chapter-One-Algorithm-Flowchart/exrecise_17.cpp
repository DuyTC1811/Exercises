#include <iostream>	
using namespace std;

int main() {
    int x;
    int n;
    cout << "Enter number x : ";
    cin >> x;
    cout << "Enter number n : ";
    cin >> n;

    float T = 1;
    float M = 1;
    float sum = 0;
    for (int i = 1; i <= n; ++i) {
        T = T * x;
        M = M * i;
        sum = sum + T / M;
    }
    cout << "Total S(n) = x + x ^ 2 / 2! + x ^ 3 / 3! +....+ x ^ n / N!  is = " << sum << endl;
    return 0;
}

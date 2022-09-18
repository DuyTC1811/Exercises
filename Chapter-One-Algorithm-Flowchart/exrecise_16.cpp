#include <iostream>	
using namespace std;

int main() {
    int n;
    int x;
    cout << "Enter number x : ";
    cin >> x;
    cout << "Enter number n : ";
    cin >> n;

    float sum = 0;
    float T = 1;
    int M = 0;
    for (int i = 1; i <= n; ++i) {
        T = T * x;
        M = M + i;
        sum = sum + T / M;
    }
    cout << "Total X + X ^ 2 / 1 + 2 + X ^ 3 + X / 1 + 2 + 3 .... is = " << sum << endl;
    return 0;
}

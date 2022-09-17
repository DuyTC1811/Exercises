#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x;
    int n;

    cout << "Enter number x : " << endl;
    cin >> x;
    cout << "Enter number n : " << endl;
    cin >> n;

    double sum = 0, T = 1;
    for (int i = 1; i <= n; ++i) {
        T = T + pow(x, i * 2 + 1);
        sum = sum + T;
    }

    cout << "Total ^ * 3 + x ^ 5... is = " << sum << endl;
    return 0;
}

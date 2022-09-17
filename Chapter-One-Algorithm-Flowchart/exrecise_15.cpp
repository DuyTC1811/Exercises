#include <iostream>	
using namespace std;

int main() {
    int n;
    do {
    cout  << "Enter number n : ";
    cin >> n;
        if (n < 1) {
            cout << "please enter a positive > 1" << endl;
        }
    } while (n < 1);

    float sum = 0;
    float T = 1;
    for (int i = 1; i <= n; ++i) {
        T = T + i;
        sum = sum + 1.0 / T;
    }

    cout << "Total 1 + 1 / 1 + 2 + 1 / 1 + 2 + 3... is = " << sum << endl;
    return 0;
}

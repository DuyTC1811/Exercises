#include <iostream>	
using namespace std;

int main() {
    int n;
    do {
        cout << "Enter number n : " << endl;
       cin >> n; 
        if (n < 1) {
            cout << "please enter a positive > 1" << endl;
        }
    } while (n < 1);

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) {
            printf("%3d ", i);
            sum = sum + i;
        }
    }
    cout << "\nTotal odd divisor" << sum << endl;
    return 0;
}
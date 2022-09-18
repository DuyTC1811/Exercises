#include <iostream>	
using namespace std;

int main() {
    int n;
    do {
        cout << "Enter number n : "; 
        cin >> n;
        if (n < 1) {
            cout << "please enter a positive > 1" << endl;
        }
    } while (n < 1);

    long sum = 0;
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {
            sum = sum + i;
        } 
    }
    if (sum == n) {
        cout << "is a perfect number " << n << endl;
    }
    else {
        cout << "not a perfect number" << endl;
    }
    return 0;
}

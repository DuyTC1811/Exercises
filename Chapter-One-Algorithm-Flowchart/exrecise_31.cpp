#include <iostream>	
using namespace std;

bool isPirme(int n) {
    if (n < 2 || n % 2 == 0) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    for (int i = 3; i <= n / 2; i+= 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    do {
        cout << "Enter number n : ";
        cin >> n;
        if (n < 1) {
            cout << "please enter a positive > 1";
        }
        if (isPirme(n)) {
            cout << n << " is prime" << endl;
        } else {
            cout << n << " not prime" << endl;
        }
    } while (n < 1);
    return 0;
}

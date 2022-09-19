#include <iostream>	
using namespace std;

bool checkSquareNumber(int n) {
    if (n < 1) {
        return false;
    }
    for (int i = 1; i * i <= n; ++i) {
        if (i * i == n) {
            return true;
        } 
    }
    return false;
}

int main() {
    int n;
    do {
        cout << "Enter number n : "; 
        cin >> n;
        if (n < 1) {
            cout << "please enter a positive > 1" << endl;
        }
    } while (n < 1);

    if (checkSquareNumber(n)) {
        cout << n << " is Square number" << endl;
    } else {
        cout << n << " not Square number" << endl;
    }
    return 0;
}

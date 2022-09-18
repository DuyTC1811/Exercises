#include <iostream>	
using namespace std;

int main() {
    int n;
    do {
        cout << "Enter numer n : ";
        cin >> n;
        if (n < 1) {
           cout << "please enter a positive > 1"; 
        }
    } while (n < 1);

    int amount = 0;
    for (int i = 1; i <= n; ++i) {
       if (i % 2 == 0) {
            amount ++;
        } 
    }
    cout << "Total amount integer = " << amount << endl;
    return 0;
}

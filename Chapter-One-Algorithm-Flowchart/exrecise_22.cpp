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

    int sum = 1;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            printf("%3d", i);
            sum = sum * i; 
        }
    }
    cout << "\nTotal product of a positive integer " << sum << endl;
    return 0;
}

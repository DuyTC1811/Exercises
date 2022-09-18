#include <iostream>	
using namespace std;

int main() {
    int n;
    do {
        cout << "Enter number n : ";
        cin >> n;
        if (n < 1) {
           cout << "please enter a positive > 1" << "" << endl; 
        }
    } while (n < 1);

    for (int i = 1; i <= n; ++i) {
       if (n % i == 0) {
            printf("%3d", i);
        } 
    }
    return 0;
}

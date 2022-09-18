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

    int count = 0;
    for (int i = 1; i <= n; ++i) {
       if (n % i == 0) {
            count ++;
        } 
    }
    cout << "Total amount integer = " << count << endl;
    return 0;
}

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


    int max = 0;
    for (int i = 1; i <= n; ++i) {
       if (n % i == 0 && i % 2 != 0) {
           if (i > max) {
                max = i;
            }
            printf("%3d ", i);
        } 
    }

    cout << "\nUoc so le lon nhat la " << max << endl;
    return 0;
}

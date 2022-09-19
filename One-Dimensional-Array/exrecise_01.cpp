#include <iostream>	
using namespace std;

#define MAX 100

void input(int array[], int &n) {
    do {
        cout << "Enter number : ";
        cin >> n;
        if (n <= 0 || n >= MAX) {
            cout << "Invalid" << endl;
        }
    } while (n <= 0 || n >= MAX);

    for (int i = 0; i < n; ++i) {
        cout << "input number: " << i + 1 << " ";
        cin >> array[i];
    }
}

void output(int array[], int n) {
    for (int i = 0; i <= n; ++i) {
        printf("%3d ", array[i]);
    }
}

int maxx(const int array[], int n) {
    int max = array[0];
    for (int i = 0; i <= n - 1; ++i) {
        if (array[i] > max) {
            max = array[i];
        } 
    }
    return max;
}

int main() {
    int n;
    int array[MAX];

    input(array, n);
    output(array, n);

    int max = maxx(array, n);
    cout << "\nnumber max : " << max << endl;
    return 0;
}

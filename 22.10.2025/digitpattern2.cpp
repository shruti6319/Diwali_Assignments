#include <iostream>
using namespace std;

int main() {
    int r;
    cout << "Enter number of rows: ";
    cin >> r;

    for (int i = 1; i <= r; i++) {
        for (int j = i; j < r; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}

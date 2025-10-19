#include <iostream>
using namespace std;

int main() {
    int i;
    int n;
    int count = 0;
    cout << "enter no: ";
    cin >> n;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            count++;
            break;  
        }
    }

    if (count == 0) {
        cout << "it is a prime no" << endl;
    } else {
        cout << "it is not a prime no" << endl;
    }

    return 0;
}

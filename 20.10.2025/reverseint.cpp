#include <iostream>
using namespace std;

int main() {
    int n, temp, rem, rev = 0;

    cout << "Enter an integer: ";
    cin >> n;

    temp = n;  

    while (temp > 0) {
        rem = temp % 10;        
        rev = rev * 10 + rem;   
        temp = temp / 10;        
    }

    cout << "Reversed number: " << rev << endl;

    return 0;
}

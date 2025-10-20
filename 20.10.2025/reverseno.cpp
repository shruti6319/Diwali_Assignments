#include <iostream>
using namespace std;

int main() {
    int no, temp, rem, rev = 0;

    cout << "Enter a number: ";
    cin >> no;

    temp = no;  

    while (temp > 0) {
        rem = temp % 10;         
        rev = rev * 10 + rem;    
        temp = temp / 10;       
    }

    cout << "Reversed integer: "<< rev << endl;

    return 0;
}

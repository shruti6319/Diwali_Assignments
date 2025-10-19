#include <iostream>
using namespace std;

int main() {
    string arr[] = {"Karanji", "Shankarpali", "Chivda", "Ladoo", "Chkli"};
    int n = 5;
    string longest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i].length() > longest.length()) {
            longest = arr[i];
        }
    }

    cout << "The longest string is: " << longest;
    return 0;
}

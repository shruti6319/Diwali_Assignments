#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n]; 

    cout << "Enter " << n << " elements (from 0 to " << n << " with one missing): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int missing = -1;

    for (int i = 0; i <= n; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            missing = i;
            break;
        }
    }

    cout << "Missing number is: " << missing;

    delete[] arr; 
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int target;
    bool found = false;

    cout << "Enter the number to search: ";
    cin >> target;

    // Linear search
    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            found = true;
            cout << "Element found at index " << i << endl;
            break; // If found, exit the loop
        }
    }

    if (!found) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

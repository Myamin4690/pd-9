#include <iostream>
#include <string>

using namespace std;

bool areAllIdentical(const string arr[], int size) {
    if (size == 0) {
        return false; // Empty array
    }

    string firstElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] != firstElement) {
            return false;
        }
    }

    return true;
}

int main() {
    string arr[4]; // Array to store the slot machine outcome

    // Get input from the user
    for (int i = 0; i < 4; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Check if all elements are identical
    if (areAllIdentical(arr, 4)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

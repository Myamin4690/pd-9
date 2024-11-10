#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int times;
    cout << "Enter the number of times to perform the transformation: ";
    cin >> times;

    for (int i = 0; i < times; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[j] % 2 == 0) {
                arr[j] -= 2;
            } else {
                arr[j] += 2;
            }
        }
    }

    cout << "Transformed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

 return 0;
}
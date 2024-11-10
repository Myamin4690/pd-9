#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    int length = inputString.length();

    if (length % 2 == 0) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

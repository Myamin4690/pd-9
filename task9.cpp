#include <iostream>
#include <string>

using namespace std;

const string MOVES[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};

string pinToDance(string pin) {
    if (pin.length() != 4) {
        return "Invalid input";
    }

    string danceMoves;
    for (int i = 0; i < 4; i++) {
        int index = (pin[i] - '0') + i;
        danceMoves += MOVES[index % 10] + ", ";
    }

    // Remove the trailing comma and space
    danceMoves.pop_back();
    danceMoves.pop_back();

    return danceMoves;
}

int main() {
    string pin;
    cout << "Enter your PIN: ";
    cin >> pin;

    string danceMoves = pinToDance(pin);
    cout << "Dance moves: " << danceMoves << endl;

    return 0;
}


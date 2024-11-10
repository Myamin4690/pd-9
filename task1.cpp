#include <iostream>
#include <string>

using namespace std;

int main() {
    string fruit[] = {"peach", "apple", "guava", "watermelon"};
    int price[] = {60, 70, 40, 30};
    int numFruits = sizeof(fruit) / sizeof(fruit[0]);//for size of index

    string fruitName;
    int quantity;

    cout << "Enter the name of the fruit: ";
    cin >> fruitName;

    cout << "Enter the quantity in kgs: ";
    cin >> quantity;

    bool found = false;
    int fruitIndex = -1;

    for (int i = 0; i < numFruits; i++) {
        if (fruit[i] == fruitName) {
            found = true;
            fruitIndex = i;
            break;
        }
    }

    if (found) {
        int pricePerKg = price[fruitIndex];
        int totalBill = pricePerKg * quantity;
        cout << "Total bill for " << quantity << " kgs of " << fruitName << ": " << totalBill << endl;
    } else {
        cout << "Fruit not found!" << endl;
    }

    return 0;
}


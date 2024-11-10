#include <iostream>
#include <string>

using namespace std;

int main() {
    // Array of movie names
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};

    // Price of a movie ticket
    double price = 500.0;

    // Get the movie name from the user
    string movieName;
    cout << "Enter the movie name: ";
    getline(cin, movieName);

    // Find the index of the movie in the array
    int index = -1;
    for (int i = 0; i < 5; i++) {
        if (movies[i] == movieName) {
            index = i;
            break;
        }
    }

    // Check if the movie is found and apply the discount
    if (index != -1) {
        double discount;
        if (index % 2 == 1) {
            // 5% discount for odd index
            discount = 0.05;
        } else {
            // 10% discount for even index
            discount = 0.10;
        }

        double discountedPrice = price - (price * discount);
        cout << "Discounted price for " << movieName << ": " << discountedPrice << endl;
    } else {
        cout << "Movie not found!" << endl;
    }

    return 0;
}

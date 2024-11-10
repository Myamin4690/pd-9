#include <iostream>
#include <vector>

using namespace std;

int calculateColoringTime(const vector<int>& colors) {
    int time = 0;
    int currentColor = colors[0];
    time += 2; // Time to color the first square

    for (int i = 1; i < colors.size(); i++) {
        if (colors[i] != currentColor) {
            time += 1; // Time to switch colors
            currentColor = colors[i];
        }
        time += 2; // Time to color the current square
    }

    return time;
}

int main() {
    int n;
    cout << "Enter the number of squares: ";
    cin >> n;

    vector<int> colors(n);
    cout << "Enter the color of each square:\n";
    for (int i = 0; i < n; i++) {
        cin >> colors[i];
    }

    int totalTime = calculateColoringTime(colors);
    cout << "Total time to color the pattern: " << totalTime << " seconds" << endl;

return 0;
}
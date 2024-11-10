#include <iostream>
#include <string>

using namespace std;

int countCommonChars(const string& str1, const string& str2) {
    int freq1[26] = {0};
    int freq2[26] = {0};
    int count = 0;

    // Calculate frequency of characters in str1
    for (char c : str1) {
        freq1[c - 'a']++;
    }

    // Calculate frequency of characters in str2
    for (char c : str2) {
        freq2[c - 'a']++;
    }

    // Count common characters
    for (int i = 0; i < 26; i++) {
        count += min(freq1[i], freq2[i]);
    }

    return count;
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    int commonChars = countCommonChars(str1, str2);
    cout << "Number of common characters: " << commonChars << endl;

return 0;
}
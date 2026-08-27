#include <iostream>
using namespace std;

void reverseString(int i, int j, string &s) {
    // Base case
    if (i >= j) {
        return;
    }

    // Swap characters
    swap(s[i], s[j]);

    // Move towards the center
    i++;
    j--;

    // Recursive call
    reverseString(i, j, s);
}

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    int i = 0;
    int j = s.size() - 1;

    reverseString(i, j, s);

    cout << "Reversed string: " << s << endl;

    return 0;
}


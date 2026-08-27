#include <iostream>
using namespace std;

bool palindrome_check(int i, int j, string &s) {
    // Base case
    if (i >= j) {
        return true;
    }

    // If characters don't match
    if (s[i] != s[j]) {
        return false;
    }

    // Recursive call
    return palindrome_check(i + 1, j - 1, s);
}

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    int i = 0;
    int j = s.length() - 1;

    if (palindrome_check(i, j, s)) {
        cout << "Palindrome";
    } else {
        cout << "Not a palindrome";
    }

    return 0;
}

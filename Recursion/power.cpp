#include <iostream>
using namespace std;

long power(int a, int b) {
    // Base case
    if (b == 0) {
        return 1;
    }

    if (a == 0) {
        return 0;
    }

    long half = power(a, b / 2);

    if (b % 2 == 0) {
        return half * half;
    }
    else {
        return a * half * half;
    }
}

int main() {
    cout << power(2, 5);

    return 0;
}

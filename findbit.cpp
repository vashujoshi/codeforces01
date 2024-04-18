#include <iostream>
using namespace std;

void printBinary(int num) {
    // Size of an integer in C++
    int bits = sizeof(int) * 8;

    // Iterate through each bit from left to right
    for (int i = bits - 1; i >= 0; i--) {
        // Check if the bit at position i is set
        int mask = 1 << i;
        if (num & mask) {
            cout << "1";
        } else {
            cout << "0";
        }

        // Add space for better readability
        if (i % 4 == 0) {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Binary representation: ";
    printBinary(num);
    return 0;
}

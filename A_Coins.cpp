#include <iostream>

int main() {
    int t;
    std::cin >> t; // Input number of test cases

    while (t--) {
        ll n, k;
        std::cin >> n >> k; // Input n and k

        bool possible = false;
        for (int x = 0; x <= 1; ++x) {
            if (n - x * k >= 0 && (n - x * k) % 2 == 0) {
                possible = true;
                break;
            }
        }

        if (possible) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}

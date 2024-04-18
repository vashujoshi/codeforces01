#include <iostream>
#include <vector>

using namespace std;

int main() {
    int plusPlusX = 0, XPlusPlus = 0, minusMinusX = 0, XMinusMinus = 0;
    int n;
    cin >> n;
    
    while (n--) {
        string s;
        cin >> s;
        if (s == "++X") {
            plusPlusX++;
        } else if (s == "X++") {
            XPlusPlus++;
        } else if (s == "--X") {
            minusMinusX++;
        } else if (s == "X--") {
            XMinusMinus++;
        }
    }

    int result = plusPlusX + XPlusPlus - minusMinusX - XMinusMinus;
    cout << result << endl;

    return 0;
}

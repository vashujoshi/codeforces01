#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;

    // Swap the first and last characters of the string
    if(s[0]!=s.back()){
    swap(s.front(), s.back());
    cout << s << endl;
    }
    else cout<<s<<endl;
    // Print the modified string
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
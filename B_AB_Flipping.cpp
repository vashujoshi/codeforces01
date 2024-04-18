#include <bits/stdc++.h>
 
using namespace std;
 
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
 
int main()
{
    _test
    {               
        int n;
        cin >> n;
        string s;
        cin >> s;
        int mn = n, mx = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') mn = min(mn, i);
            else mx = i;
        }
 
        cout << max(0, mx - mn) << "\n";
    }
}
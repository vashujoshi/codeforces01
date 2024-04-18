#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    /// freopen("input.txt", "r", stdin);
    /// freopen("output.txt", "w", stdout);
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        set<pair<int, char>> x, y;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                if (x.size())
                    x.erase(--x.end());
                continue;
            }

            if (s[i] == 'B')
            {
                if (y.size())
                    y.erase(--y.end());
                continue;
            }

            if (s[i] >= 'a' && s[i] <= 'z')
                x.insert({i, s[i]});
            if (s[i] >= 'A' && s[i] <= 'Z')
                y.insert({i, s[i]});
        }

        set<pair<int, char>> z;

        for (auto e : x)
            z.insert(e);
        for (auto e : y)
            z.insert(e);

        for (auto it = z.begin(); it != z.end(); ++it)
        {
            cout << it->second;
            
        }
        cout << "\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
 
int main() {
	long long a, b;
	
    int ans = 0;
    cin >> a >> b;
    for (int d = 2; d <= 61; d++)
    {
        for (int s = 0; s < d - 1; s++)
        {
            long long v = (1LL << d) - 1 - (1LL << s);
            if (v >= a && v <= b)
                ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}
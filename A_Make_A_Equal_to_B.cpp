#include<bits/stdc++.h>
using namespace std;
const int maxn = 105;
int T, n, a[maxn], b[maxn];
int main() {
	for(scanf("%d", &T); T --; ) {
		scanf("%d", &n);
		int ans = 0;
		for(int i = 1; i <= n; ++ i)
			scanf("%d", &a[i]);
		for(int i = 1; i <= n; ++ i)
			scanf("%d", &b[i]);
		for(int i = 1; i <= n; ++ i)
			ans += a[i] ^ b[i];
		int cnta = 0, cntb = 0;
		for(int i = 1; i <= n; ++ i)
			cnta += a[i], cntb += b[i];
		ans = min(ans, abs(cnta - cntb) + 1);
		printf("%d\n", ans);
	}
}
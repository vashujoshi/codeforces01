#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
    multiset<char>m;
    multiset<char>f;
	for(auto c:s){
		m.insert(c);
	}   

	for(auto c:m){
       if(k)f.insert(c),--k;
	   else break;
	}
	string ans="";
     for(auto c:s){
		auto itr=f.find(c);
		if (itr!=f.end()){ 
          f.erase(itr);
		}
		else{
			ans+=c;
		}        
	 }
	 cout<<ans;
}
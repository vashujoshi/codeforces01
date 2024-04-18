#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        unordered_map<char,int> freq;
        for(int i=0;i<n;i++)
        {
            freq[s[i]]++;
        }
        for(auto i:freq)
        {
            if(i.second>=i.first-'A'+1)
                cnt++;
        }
        cout<<cnt<<endl;
    }
}

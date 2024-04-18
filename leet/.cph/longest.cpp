#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       int n=nums.size();
       int cnt=0;
       int i=0,j=0,mx=0;
       for (j = 0; j < n; j++)
       {
        mp[nums[j]]++;
        while(mp[nums[j]]>k&&i<=j){
            mp[nums[i--]];
            i++;
        }
        cnt=j-i+1;
        mx=max(mx,cnt);
       }
       cout<<mx<<endl;
     
    }
};
#include<bits/stdc++.h>
using namespace std;
 long long maxSubarraySum(int arr[], int n) {
    long long sum = arr[0];
    long long best = arr[0];
    for (int i = 1; i < n; i++) {
        sum = max(sum + arr[i],static_cast<long long>(arr[i]));
        best = max(best, sum);
    }
    return best;
}

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        
        cout << maxSubarraySum(a, n) << endl;
    }
}

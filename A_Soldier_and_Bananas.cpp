#include<iostream>
using namespace std;
#define ll long long

int main() {
    int t,k,w;
    long long int n;
    int a;
    cin>>k>>n>>w;
    long long int sum = (w / 2) * (k + w * k);
    if (sum>n)
    {
      cout<<sum-n;
    }
   else{
   cout<<0;}
    
         
     }

// #include <iostream>
// #include <string>

// int main() {
//     std::string inp;
//     std::getline(std::cin, inp);

//     int k,  w;
//     long long int n;
//     sscanf(inp.c_str(), "%d %d %d", &k, &n, &w);

//     long long int Sum = (w / 2) * (k + w * k);

//     if (Sum > n) {
//         std::cout << (Sum - n) << std::endl;
//     } else {
//         std::cout << 0 << std::endl;
//     }

//     return 0;
// }
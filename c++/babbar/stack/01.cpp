#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    stack<int>s;
    vector<int>v;
    s.push(1);
    
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(7);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
   

    if (s.empty())
    {
        cout<<"empty";
    }
    else{
        cout<<"not empty";
    }
    

}
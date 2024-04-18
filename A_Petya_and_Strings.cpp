#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string w,s;
    getline(cin,s);
    getline(cin,w);
    for ( char &c : s)
    {
     c=tolower(c);    
    }
    for ( char &c : w)
    {
     c=tolower(c);    
    } 
    int len=s.length();
    int len1=w.length();
    
    if(w==s)
     cout<<"0";
    else if(w>s) {
    cout <<"-1";
    }    
    if(s>w) {
    cout <<"1";
    }    
   
}
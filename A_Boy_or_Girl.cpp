#include<iostream>
#include<algorithm>
#include<string>
#include<set>
using namespace std;
int main(){
    string s;
    set<char>set1;
    getline(cin,s);
    for (int i = 0; i < s.size(); i++)
    {
    set1.insert(s[i]);    /* code */
    }
   
   
    if(set1.size()%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    }
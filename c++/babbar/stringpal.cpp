#include <bits/stdc++.h> 
#include<string>
#include<iostream>
using namespace std;
void tolowercase(string &s)
{
    for(int i=0;i<s.size();i++)
    {
      char ch=s[i];
      if(ch>='A' && ch<='Z')
      {
        ch=ch-'A'+'a';
        s[i]=ch;
      }
    }
}
bool checkPalindrome(string s)
{
    // Write your code here.
    tolowercase(s);
    int i=0;
    int j=s.size()-1;
    while(i<j)
    {
      if(isalnum(s[i])==0)
    {
      i++;
    }
   else if(isalnum(s[j])==0)
    {
      j--;
    }
    else if(s[i]==s[j])
    {
      i++;
      j--;
    }
    else
    {
      return false;
    }
    }
    return true;
}

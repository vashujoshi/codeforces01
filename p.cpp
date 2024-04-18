#include<bits/stdc++.h>
             
using namespace std;
void display(set<string>&s)
{
  set<string>::iterator itr;
   
  // Displaying set elements
  for (itr = s.begin(); 
       itr != s.end(); itr++) 
  {
    cout << *itr << " ";
  }
}  
 
int main()
 {
set<string>s;
vector<string>v={"aaa","vvv","aaa","v","avb","abv"};
for (int  i = 0; i <6; i++)
{
s.insert(v[i]);                 
}
display(s);
 return 0;
}
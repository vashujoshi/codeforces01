#include<iostream>
#include<cmath>
#include<string>
             
using namespace std;

class student
{

public:
 string name,gang;   
 string major;    
 double  cgpa,kill;   

student(string a,string b,double c){
name=a;
major=b;
cgpa=c;

}


};

int main()
 { 
    student s1("vashu","cse",4.3);       
    student s2("ace","cse",2.3);       
         
 cout<<s2.name<<endl;
 cout<<s1.cgpa;
     return 0;
 }
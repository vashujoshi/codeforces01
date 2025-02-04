#include <iostream>
using namespace std;
class human
{
public:
    int age=20;
    string color="blue" ;
    string name;
    int amanner;
    public:

 void setcolor(string color)
    {
       cout<<"color is"<<color;
        this->color="blue";
    }
    string getcolor()
    {
        return this->color;
    }
    int getage()
    {
        return this->age;
    }
    void setage(int age)
    {
       cout<<"age is"<<age;
        this->age;
    }
};
class man : public human
{
    int getmanner()
    {
        cout << "good";
        return this->amanner;
        
    }
};

int main()
{
    man manish;
    cout<<manish.getmanner()<<endl;
  

}
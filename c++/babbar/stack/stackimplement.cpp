#include<iostream>
using namespace std;
int main(){
    class Stack{
      public:
      int *arr;
      int top;
      int size;


     Stack( int size ) {
        this->size=size;
        arr=new int[size];
        top=-1;
     }




    };
}
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
        
    }
    ~node(){
         int val=this->data;
         if(next!=NULL){
            delete next;
            next=NULL;
         }
         cout<<"memory free for node with data"<<val<<endl;
    }
};

void insertnode(node * &tail,int element,int d){

if (tail==NULL)
{
    node* n1=new node(d);
    tail=n1;
    n1->next=n1;

}
else{
    node* curr=tail;

    //searchig element
    while (curr->data!=element)
    {
        curr=curr->next;
    }
     node* temp=new node(d);   
     temp->next= curr->next;
     curr->next=temp;
}

}
void print(node* &tail){
      node* temp=tail;
      do{
        cout<<tail->data<<" ";
        tail=tail->next;
      }while(tail!=temp);
        cout<<endl;
}

void deletion(node* &tail,int value){
       if(tail==NULL){
        return;
       }
       else{
        node* prev=tail;
        node* curr=prev->next;
        while (curr->data!=value)
        {
            /* code */
            prev=curr;
            if (tail==curr)
            {
                tail=prev;
            }
            curr->next=NULL;
            delete curr;
            
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
        
       }

}



int main(){
    node* tail= NULL;
    insertnode(tail,5,3);
    print(tail);
    insertnode(tail,3,4);
    print(tail);

    insertnode(tail,4,6);
    print(tail);
    insertnode(tail,4,5);
    deletion(tail,1);
    print(tail);

}

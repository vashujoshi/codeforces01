#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node *prev;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
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
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout <<temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;
}


// int getlength(node* head){
//   int length=0;
//   node *temp = head;
//     while (temp != NULL)
//     {
//         length++;
//         temp = temp->next;
//     }
    
//  return length;   
// }
//NULL VALA EK CASE

void insertathead(node* &head,int d){
     node* temp=new node(d);
    temp->next=head;
    head->prev=temp; 
    head=temp;

}
 
void insertattail(node* &tail,int d){
    node* temp=new node(d);
     tail->next=temp;
    temp->prev=tail; 
    tail=temp;
}
 void insertatposition(node* &tail, node *&head,int position, int d)
    {
        if (position == 1)
        {
            insertathead(head, d);
            return;
        }

        node *temp = head;
      
        int cnt = 1;
        while (cnt <position-1)
        {
            temp = temp->next;
            cnt++;
        }


        if (temp->next == NULL)
        {
            insertattail(tail, d);
            return;
        }
        node* nodetoinsert=new node(d);
        nodetoinsert->next=temp->next;
        temp->next->prev=nodetoinsert;
        temp->next=nodetoinsert;
        nodetoinsert->prev=temp;
    }
void deleting(node* &head,int position){
if(position==1){
    node* temp=head;
     temp ->next->prev=NULL;
     head= temp->next;
     temp->next=NULL;
     delete temp;
}
else{
    node *curr=head;
    node* prev=NULL;
     int cnt = 1;
            while (cnt < position)
            {
                prev = curr;
                curr = curr->next;
                cnt++;
            }
    prev->next=curr->next;
    curr->next=NULL;
    curr-> prev=NULL;
    delete curr;
}
}

int main()
{
    node* n1=new node(10);
    node*nodetoinsert=new node(5);
    node* head=n1;
    node* tail=n1;
    
    
 //  cout<< getlength(head);
//  insertathead(head,9);
//  print(head);
//  insertathead(head,8);
//  print(head);
//  insertathead(head,7);
//  print(head);


insertattail(tail,11);
insertattail(tail,12);
insertattail(tail,99);
insertatposition(tail,head,1,100);
insertatposition(tail,head,4,400);
print(head);
deleting(head,6);
print(head);
cout<<"head  "<<head->data<<endl;
cout<<"tail  "<<tail->data<<endl;
}

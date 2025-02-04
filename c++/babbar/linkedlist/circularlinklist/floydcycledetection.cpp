#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
    // insertion at head
    void insertathead(Node *&head, int d)
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }
    void insertattail(Node *&tail, int d)
    {
        Node *temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }

    // print
    void print(Node *&head)
    {

        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertatposition(Node *&head,  int position, int d)
    {
        if (position == 1)
        {
            insertathead(head, d);
            return;
        }

        Node *temp = head;
        Node *tail = head;
        int cnt = 1;
        while (cnt <= position-1)
        {
            temp = temp->next;
            cnt++;
        }

        Node *nodetoinsert = new Node(d);
        nodetoinsert->next = temp->next;
        temp->next = nodetoinsert;

        if (temp->next == NULL)
        {
            insertattail(tail, d);
            return;
        }
    }

    Node* floyddetect(Node* head){
            
            if (head==NULL)
            {
                return NULL;
            }
            
            Node* fast=head;
            Node* slow=head;
            while (slow!=NULL&& fast!=NULL)
            {
                fast=fast->next;
                if(fast!=NULL){
                fast=fast->next;
                }
                slow=slow->next;
                if (fast==slow)
                {
                    return slow;
                }
                
            }
            return NULL;
    }
int main()
{
    // new node
    Node *n1 = new Node(1);
    Node *head = n1;
    Node *tail = n1;

    //n1->print(head);
    insertathead(head, 0);
    
    //n1->print(head);
    insertattail(tail, 3);
    insertatposition(head,2,2); // for insertion
    insertattail(tail, 4);
    insertattail(tail, 5);
    tail->next=head->next;
    if(floyddetect(head)){
        cout<<"loop present"<<endl;
    }
else{
    cout<<"loop not present"<<endl;
}
    
    
    return 0;
}
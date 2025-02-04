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
    // insertion at tail
    void insertattail(Node *&tail, int d)
    {
        Node *temp = new Node(d);
        tail->next = temp;
        tail = temp ;
    }
    // print
    void print(Node *&head)
    {

        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data<<" ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    // new node
    Node *n1 = new Node(10);
    Node *head = n1;
    Node *tail = n1;

    n1->print(head);
    n1->insertattail(tail,12);
    n1->print(head);
    n1->insertattail(tail, 15);
    n1->print(head);
}   

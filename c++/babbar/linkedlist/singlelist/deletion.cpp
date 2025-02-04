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

    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is freee for data" << value << endl;
    }

    // insertion at head
    void insertathead(Node *&head, int d)
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }

    // deletion
    void deletion(int position, Node *&head)
    {
        if (position == 1)
        {
            Node *temp = head;
            head = head->next;
            // memory free of first node
            temp->next = NULL;
            delete temp;
        }

        else
        {

            Node *prev = NULL;
            Node *curr = head;
            int cnt = 1;
            while (cnt < position)
            {
                prev = curr;
                curr = curr->next;
                cnt++;
            }
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
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
};
int main()
{
    // new node
    Node *n1 = new Node(10);
    Node *head = n1;

    n1->print(head);
    n1->insertathead(head, 12);
    n1->print(head);
    n1->insertathead(head, 15);
    n1->print(head);
    n1->insertathead(head, 18);
    n1->deletion(2, head);
    n1->print(head);
}

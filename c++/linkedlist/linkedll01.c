#include<stdio.h>
#include<stdlib.h>
  struct Node{
        int data;
       struct Node* next;
       struct Node* prev;
    };
    struct Node*head=NULL;
    void addempty(int d){
         struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
          temp->data=d;
          temp->prev=NULL;
          temp->next=NULL;
          head=temp;
    }
     void insertatbeg(int d)
     {
         struct Node* temp;
         temp=(struct Node*)malloc(sizeof(struct Node));
         temp->data=d;
         temp->next=head;
         temp->prev=NULL;
          if(head!=NULL){
            head->prev=temp;
          }
          head=temp;//update head
     }
     void deletefirst(){
        struct Node* temp;
        temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
     }
void displaylinkedlist() {
    struct Node*temp=head;
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}   

int main(){
addempty(2);
insertatbeg(1);
insertatbeg(1);
insertatbeg(-1);

displaylinkedlist();    
    return 0;

}
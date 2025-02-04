#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
  struct node* top=NULL;
  void insert(){
   struct node*new_node; 
  new_node=(struct node*)malloc(sizeof(struct node));
  if(new_node==NULL){
    printf("overflow");
  }
  else {
    int d;
    printf("enter the data");
    scanf("%d",&d);
    new_node->data=d;
    new_node->next=NULL;
    if(top==NULL){
        top=new_node;
    }
    else{
          new_node->next=top;
          top=new_node;
    }
  } 
  }
int main()
{
    
    return 0;
}
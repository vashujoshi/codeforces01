#include<bits/stdc++.h>
             
using namespace std;
struct node {
int data;
node* left;
node* right;

node(int val):data(val),left(NULL),right(NULL){}
};
void levelordertraversal(node* root){
 queue<node*>q;
 q.push(root);
 while (!q.empty())
 {
 node* x=q.front();
 q.pop();
 if(root->left!=NULL){
       q.push(root->left);
       root->right->level++;
 }
 else{
    q.push(root->right);
 }
 }
} 


int main()

 {



 return 0;
}
#include<bits/stdc++.h>
             
using namespace std;
   struct trienode{
          trienode* children[26];
          bool isendofword; 
      };
      trienode* getnode(){
      trienode* newnode=new trienode();//object creation 
      newnode->isendofword=false;
      for(int i=0;i<26;i++)newnode->children[i]=NULL;
      return newnode;
    }
       trienode* root;

//constructor
    //    Trie() {
    //     root=getnode();
    //        }
     
     void insert(string word) {
    trienode* crawler=root;
     for(int i=0;i<word.length();i++){
     char ch=word[i];
        if(crawler->children[ch-'a']==NULL){
          crawler->children[ch-'a']=getnode();
         }
        crawler= crawler->children[ch-'a'];
     }
     crawler->isendofword=true;
    }
      //slight variation of insert
    bool search(string word) {
    trienode* crawler=root;
     for(int i=0;i<word.length();i++){
     char ch=word[i];
        if(crawler->children[ch-'a']==NULL){
          return false;
         }
        crawler= crawler->children[ch-'a'];
     }
     if(crawler!=NULL&&crawler->isendofword==true)return true;
     return false;
    }
    
    bool startsWith(string prefix) {
      trienode* crawler=root;
     for(int i=0;i<prefix.length();i++){
     char ch=prefix[i];
        if(crawler->children[ch-'a']==NULL){
            return false;
         }
        crawler= crawler->children[ch-'a'];
     }
     return true; 
    }
int main()
 {

 return 0;
}

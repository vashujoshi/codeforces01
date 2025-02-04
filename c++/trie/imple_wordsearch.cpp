#include<bits/stdc++.h>
using namespace std;
vector<string>result;
int m,n;


    struct trienode{
        bool isendofword;
        string word;
        trienode* children[26];
    };
    trienode* getnode(){
      trienode* newnode=new trienode();//object creation 
      newnode->isendofword=false;
      newnode->word="";
      for(int i=0;i<26;i++)newnode->children[i]=NULL;
      return newnode;
    }

    void insert(trienode* root,string& word){
     trienode* crawler=root;//pointer jo travel krega
     for(int i=0;i<word.length();i++){
     char ch=word[i];
        if(crawler->children[ch-'a']==NULL){
          crawler->children[ch-'a']=getnode();
         }
        crawler= crawler->children[ch-'a'];
     }
     crawler->isendofword=true;
     crawler->word=word;
    }

//searching for specific graph problem
void dfs(vector<vector<char>>& board,trienode* root,int i,int j){
            if(i<0||i>=m||j<0||j>=n||board[i][j]=='$'||root->children[board[i][j]-'a']==NULL){
                return;
            }
            root=root->children[board[i][j]-'a'];
            if(root->isendofword==true){
                result.push_back(root->word);
                root->isendofword=false;
               }
          char temp=board[i][j];
          board[i][j]='$';
             dfs(board,root,i+1,j);
             dfs(board,root,i,j+1);
             dfs(board,root,i-1,j);
             dfs(board,root,i,j-1);

        board[i][j]=temp;
    }


int main()
 {
 return 0;
}
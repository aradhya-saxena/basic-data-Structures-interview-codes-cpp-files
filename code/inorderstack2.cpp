#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>
#include<stdio.h>
#include <map>
#include <string.h>
using namespace std;

struct tree{
    int v;
    tree* left;
    tree* right;
};

tree* maketree(int v){
    tree  *root= (tree*)malloc(sizeof(tree));
    root->v=v;
    root->left=NULL;
    root->right=NULL;
    return root;
}

int max(int a,int b){
    return a>b?a:b;
}

int height(tree * root){

    if(root == NULL)
        return 0;
    else
        return max(height(root->left),height(root->right))+1;

}
stack<int> s2;
void inorder(tree * root){

    if(!root)
        return;
    stack<tree *> s;
    int done=1;

    while(done){

        if(root!=NULL){
            //cout<<root->v;
            s.push(root);
            s2.push(root->v);
            root=root->right;

           // cout<<root->v;
        }
        else{if(!s.empty()){
            tree * temp= s.top();
           // cout<<temp->v;
            root=temp;
            root=root->left;;
            s.pop();
        }
        else
            done=0;


    }
    }



}

int main(){

    tree * node = maketree(1);
    node->left=maketree(2);
    node->right=maketree(3);
    node->left->left=maketree(4);
    node->left->right=maketree(5);
    node->right->left=maketree(6);
    node->right->right=maketree(7);
    //cout<<height(node);
    inorder(node);

    while(!s2.empty()){
        cout<<s2.top();
        s2.pop();
    }


return 0;
}

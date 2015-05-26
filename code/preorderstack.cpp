#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>
#include<stdio.h>
using namespace std;

struct tree{
    int d;
    tree *left;
    tree *right;
};

tree* maketree(int v){
    tree * root= (tree*)malloc(sizeof(tree));
    root->d=v;
    root->left=NULL;
    root->right=NULL;
    return root;
}

tree * preorder(tree *root){

    stack<tree*> s;
    while(1){
        while(root){
            cout<<root->d;
            s.push(root);
            root=root->left;
        }
        s.pop();
        if(s.empty())
            break;
        root=s.top();
        root=root->right;
        s.pop();

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

    preorder(node);
    return 0;
}




#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>
#include<stdio.h>
#include <map>
#include <string>
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

int main(){

    string s= "aradhya";
    int k= s.compare("chut");
    cout<<k;

    tree * node = maketree(1);
    node->left=maketree(2);
    node->right=maketree(3);
    node->left->left=maketree(4);
    node->left->right=maketree(5);
    node->right->left=maketree(6);
    node->right->right=maketree(7);
   // cout<<height(node);


return 0;
}

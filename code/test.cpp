#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

struct tree{
    int v;
    tree * left;
    tree * right;
};

tree * maketree(int k){
    tree * root = (tree*) malloc(sizeof(tree));
    root->left=NULL;
    root->right=NULL;
}

int height(tree * root){
    if(root==NULL)
        return 0;
    else
        return 1+max(height(root->left),height(root->right));

}
int main(){

     tree * root = (tree*) malloc(sizeof(tree));
     root->v=0;
     root->left=maketree(1);
     root->left->left=maketree(2);
     root->right=maketree(3);
     int a= height(root);
     cout<<a;

return 0;
}

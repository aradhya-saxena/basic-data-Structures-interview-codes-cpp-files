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

 int preorder(tree *root,int r){

    if(!root)
        return NULL;

    r=!r;
    static int c=0;
    //cout<<root->d;

    preorder(root->left,r);
    preorder(root->right,r);
    c++;
return c;
}
int printTree(tree* root)
{
    if(root)
    {
        if(root->left && root->right)
        {
            return 2*printTree(root->left)*printTree(root->right);
        }
        else if (root->left==NULL && root->right!=NULL)
        {
            return printTree(root->right);
        }
        else if (root->right == NULL && root->left != NULL)
        {
            return printTree(root->left);
        }
        else
            return 1;
    }
}

void in(tree * root){
    if(!root)
        return;

    in(root->left);
    cout<<root->d;
    in(root->right);

}

tree* inorder(int pre[],int in[],int index,int s,int e,int size){

    if(s>=e||index>size-1)
        return NULL;
    int temp=index;
    tree * root= maketree(pre[index]);
    index++;
    int i;
    for(i=s;i<=e;i++)
    {
        if(in[i]==root->d)
        break;
    }
    if(s==e)
        return root;

    if(pre[index]<pre[temp]){
        root->left=inorder(pre, in,index,s,i-1,size);
        root->right=inorder(pre, in,index,i+1,e,size);}
    else{
        root->right=inorder(pre, in,index,s,i-1,size);
        root->left=inorder(pre, in,index,i+1,e,size);
        }


    return root;

}








int main(){


    int a[5]={2,4,3,5,1};
    int b[5]={1,2,3,4,5};
    int ind;
    for(int i=0;i<5;i++){
        if(b[i]==a[0])
            ind=i;}
    tree *root=inorder(a,b,ind,0,4,5);
    int c=0;
    in(root);//(root,0);
    //cout<<c;
    //int a=preorder(node,0);
    //cout<<a;
    return 0;
}




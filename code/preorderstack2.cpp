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

/*oid inorder2(tree *root){

    if(!root)
        return;
    stack <tree *> s;
    s.push(root);
    while(!s.empty()){
        if(!root){
            root=root->left;
            s.push(root);
        }
        else{
            tree * cur= s.top();
            cout<<cur->d;
            s.pop();
            root=s.top();
            root=root->right;
        }

    }
*/


void inorder(tree *root){

    if(!root)
        return;
    tree * cur = root;
    stack<tree*> s;

    int done=1;
    while(done){

        if(cur!=NULL){
            s.push(cur);
            cur=cur->left;
        }
        else{
            if(!s.empty()){
                tree * t = s.top();
                cout<<t->d;
                cur=t;
                s.pop();
                cur=cur->right;
            }
            else
                done=0;
        }
    }



}

void levelwiseorder(tree * root){
    int i=0;
    if(!root)
        return;
    queue<tree*>q;
    q.push(root);
    while(!q.empty()){
        tree * cur= q.front();
        cout<<cur->d;
        if(!i){
        if(cur->right)
            q.push(cur->right);
        if(cur->left)
            q.push(cur->left);}
        else{
         if(cur->left)
            q.push(cur->left);
        if(cur->right)
            q.push(cur->right);

        }

        i=!i;
        q.pop();
    }
}
stack<int> s2;
void postorder(tree *root){

    if(!root)
        return;
    tree * cur = root;
    stack<tree*> s;

    int done=1;
    while(done){

        if(cur!=NULL){
            s.push(cur);
            s2.push(cur->d);
            cur=cur->right;
        }
        else{
            if(!s.empty()){
                tree * t = s.top();
                //cout<<t->d;
                cur=t;
                s.pop();
                cur=cur->left;
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

    //postorder(node);
   /* while(!s2.empty()){
        cout<<s2.top();
        s2.pop();

    }*/
    cout<<endl;
    levelwiseorder(node);
//    inorder2(node);
    return 0;
}




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

void postorder(tree *root){

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
                cur=t;
                cur=cur->right;
                s.push(cur);
            }
            else
                done=0;
        }
    }



}


void call( stack<int> & c,int &b) // or stack<int> *c;
{

    (c).push(3);
    //(*c).push();
        b++;

}

int main(){


    stack <int> c;
    c.push(1);
    c.push(2);
    int a=10;
    cout<<a<<endl;
    cout<<c.top()<<endl;
    call(c,a);//call(*c,a);
    cout<<c.top()<<endl;
    cout<<a<<endl;
}

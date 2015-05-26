#include <iostream>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

struct tree{
    int v;
    tree *left;
    tree *right;
};

tree* maketree(int d){

    tree * root = (tree*)malloc(sizeof(tree));
    root->v=d;
    root->left=NULL;
    root->right=NULL;
    return root;
}

void arrtree(int r,int a[]){
    queue<int> q;
    q.push(r);
    stack<int>s;
    //s.push(r);
    while(!q.empty()){
        int p= q.front();

        cout<<p;
        s.push(p);
        //temp* root= maketree(p)
        int flagL=0,flagR=0;
        for(int i=6;i>=0;i--){
            if(a[i]==p){
                q.push(i);
            }
        }
        q.pop();
    }
    cout<<endl;
    while(!s.empty()){
        int a=s.top();
        cout<<a;
        s.pop();
        }
}

int main(){

    int temp=0;
    int a[]={1,5,5,2,2,-1,3};
    for(int i=0;i<7;i++){
        if(a[i]==-1)
            temp=i;
    }

    arrtree(temp, a);


return 0;
}

#include <iostream>
#include <queue>
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
    root->right=NULL:
    return root;
}

void arrtree(int r,int a[]){
    queue<int> q;
    q.push(r);

    while(!q.empty()){
        int p= q.front();
        cout<<p;
        //temp* root= maketree(p)
        int flagL=0,flagR=0;
        for(int i=0;i<7;i++){
            if(a[i]==p){
                if(!flagL){
                    q.push(i);
                    flagL=1;
                }
                if(!flagR){
                    q.push(i);
                    flagL=1;
                }
            }
        }
        q.pop();
    }


}

int main(){

    int temp=0;
    int a[]={1,5,5,2,2,-1,3};
    for(int i=0;i<7;i++){
        if(a[i]==-1)
            temp=i;
    }

    arrtree(int temp, a);


return 0;
}

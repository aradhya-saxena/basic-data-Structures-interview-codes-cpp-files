#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <malloc.h>
#include <map>
using namespace std;

struct tree{
	int v;
	tree * left;
	tree * right;
};

tree * maketree(int k){
	tree * root= (tree*) malloc(sizeof(tree));
	root->v=k;
	root->left=NULL;
	root->right=NULL;
	return root;
}

void vertical(tree * root, int h,map <int,int> &m){
    if(!root)
        return;
    if(m[h])
        m[h]+=root->v;
    else
        m[h]=root->v;

    vertical(root->left,h-1,m);
    vertical(root->right,h+1,m);

}

int main(){
	tree * root=maketree(4);
	root->left=maketree(2);
	root->right=maketree(6);
	root->left->left=maketree(1);
	root->left->right=maketree(3);
	root->right->left=maketree(5);
	root->right->right=maketree(7);
    map<int,int> m;
    vertical(root,0,m);

    map<int,int> :: iterator it;
    for(it=m.begin();it!=m.end();++it)
        cout<<it->first<<"\t"<<it->second<<endl;

return 0;
}

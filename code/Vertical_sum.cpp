#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <malloc.h>
#include <map>
#include <vector>
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
int i=0;
/*void sum(tree * root,int &sum){
    if(root->left==NULL && root->right=NULL)
        {   i++;
            return 0;
        }
    sum+


}*/
void lca(tree * root, int a, int b){
    if(!root)
        return;
    if(root->v<a&& root->v<b)
        return lca(root->right,a,b);
    else if(root->v>a,root->v>b)
        return lca(root->left,a,b);

    cout<<root->v;
    return;


}
void presuc(tree * root, tree * & pre, tree * & suc,int k){

    if(!root)
        return;
    if(root->v==k){
           if(root->left!=NULL){
                tree* temp=root->left;
                while(temp->right!=NULL)
                    temp=temp->right;
                pre=temp;
            }
            if(root->right!=NULL){
                tree * temp=root->right;
                while(temp->left!=NULL)
                    temp=temp->left;
                suc=temp;
            }
            return;

    }
    if(root->v>k){
        suc=root;
        presuc(root->left,pre,suc,k);


    }
    if(root->v<k){
        pre=root;
        presuc(root->left,pre,suc,k);

    }
}
vector <int> v;
void maxino(tree * root){
    if(!root)
        return;
    maxino(root->left);
    cout<<root->v;
  //  v.push_back(root->v);
    return maxino(root->right);
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
    //vertical(root,0,m);
    //lca(root,1,3);
    tree * pre=NULL; tree * suc= NULL;
    //presuc(root,pre,suc,3);
   // cout<<pre->v<<endl<<suc->v;
    map<int,int> :: iterator it;
    /*for(it=m.begin();it!=m.end();++it)
        cout<<it->first<<"\t"<<it->second<<endl;*/
    maxino(root);
   // vector<int>::iterator kk= min_element(v.begin(),v.end());
   // cout<<*kk;
   // sort(v.begin(),v.end());

   /* map<int,vector <int> > mp;
    mp[0].push_back(1);
    mp[0].push_back(2);
    map<int,vector<int> >::iterator it1;
    vector<int>::iterator it2;
    for(it1=mp.begin();it1!=mp.end();it1++){
        for(it2=(it1->second).begin();it2!=(it1->second).end();++it2)
            cout<<*it2<<endl;

    }
*/
return 0;
}

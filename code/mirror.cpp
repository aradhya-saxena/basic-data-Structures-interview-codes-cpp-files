#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>
#include<stdio.h>
#include <map>
#include <string.h>
#include <vector>

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

/*int max(int a,int b){
    return a>b?a:b;
}

int height(tree * root){

    if(root == NULL)
        return 0;
    else
        return max(height(root->left),height(root->right))+1;

}
int maxd(tree * root){
    if(!root)
        return 0;
    else
        return 1+max(maxd(root->left),maxd(root->right));

}
int mind(tree * root){

    if(root==NULL)
        return -1;
    if(root->left==NULL && root->right==NULL)
        return 1;
    else{
        cout<<"yes"<<root->v<<endl;
        return 1+min(mind(root->left),mind(root->right));}
}


void balance(tree *root){

    if(!root)
        return ;
    int ans= maxd(root)-mind(root);
    cout<<ans;

}
void mirror(tree * root){

     if(root== NULL)
        return;
     mirror(root->left);
     mirror(root->right);

     tree* temp;
     temp= root->left;
     root->left=root->right;
     root->right=temp;


}

void inorder(tree * root){

    if(root==NULL)
        return;

    inorder(root->left);
    cout<<root->v;
    inorder(root->right);

}

tree * createtree(int a[], int l, int h){
    if(l>h)
        return NULL;
    else
    {
        int mid=l+ (h-l)/2;
        tree * temp= maketree(a[mid]);
        temp->left=createtree(a,l,mid-1);
        temp->right=createtree(a,mid+1,h);
        return temp;
    }


}
*/

//to print print inorder
int main(){

    /*tree * node = maketree(1);
    node->left=maketree(2);
    node->right=maketree(3);
    node->left->left=maketree(4);*/
    //node->left->right=maketree(5);
    //node->left->left->left=maketree(18);
    //node->left->left->right=maketree(5);
    //node->left->right->left=maketree(18);
    //node->left->right->right=maketree(5);

    //node->right->left=maketree(6);
    //node->right->right=maketree(7);
    //inorder(node);
    //cout<<mind((node));
    //mirror(node);
    //inorder(node);
   //balance(node);

   /*int a[]={1,2,3,4,5,6};
   int size= sizeof(a)/sizeof(a[0]);*/

   /*tree * root= createtree(a,0,size-1);
   inorder(root);*/
   int a,b;
   map<int, vector<int> > m;
   for(int i =0 ;i<3 ;i++){
    cin>>a;
    cin>>b;
    m[a].push_back(b);

   }
    vector<int> :: iterator it2;
    int arr[3]={0};
   map<int, vector<int> > :: iterator it;
    for(it=m.begin();it!=m.end();it++){
       arr[(it->first)]+=1;
        for(it2=it->second.begin();it2<it->second.end();++it2){
        cout<<it->first<<" "<<*it2<<endl;
        arr[*it2]=0;
        }

    }
    for(int i=0;i<5;i++){
        if(arr[i]==1)
            cout<<i;

    }
    return 0;
//    int arr[5];

//*/
vector< pair<int,int> > v;

v.push_back(make_pair(1,5));
v.push_back(make_pair(3,7));
v.push_back(make_pair(2,8));

vector<int> v2;
v2.push_back(2);
v2.push_back(1);
v2.push_back(3);

sort(v.begin(),v.end());

/*vector< pair<int,int> > :: iterator it;
for( it = v.begin() ; it <v.end() ; it++){
cout<<it->first<<" "<<it->second<<"\n";

}
return 0;
int m,n;
cin>>m;
cin>>n;
int a[m][n];
cin>>a[0][0];
*/
return 0;
}

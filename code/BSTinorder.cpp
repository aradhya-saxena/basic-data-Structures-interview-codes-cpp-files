#include <iostream>
#inlcude <algorithm>


struct tree{

    int v;
    tree * left;
    tree * right;
};

tree* maketree(int key){
    tree * root= (tree*)malloc(sizeof(tree));
    root->left=NULL;
    root->right=NULL;
    root->parent=NULL;
    root->v=key;
}

tree * insert(tree *root ,int key){
    if(root)
      return maketree(key);
    if(key<root->v){
        tree * temp =insert(root->left,key);
        root->left=temp;
        temp->parent=root;
    }
    else if (key>root->v){
        //=insert(root->right,key);
    }
    return root;
}

int inordersucc()


int main(){



return 0;
}

// C++ program to find predecessor and successor in a BST
#include <iostream>
#include<queue>
#include<stack>
#include<algorithm>
#include<stdio.h>
#include <map>
#include <string.h>
using namespace std;

// BST Node
struct Node
{
    int key;
    struct Node *left, *right;
};

// A utility function to create a new BST Node
Node *newNode(int item)
{
    Node *temp =  new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

/* A utility function to insert a new Node with gikeyen key in BST */
Node* insert(Node* Node, int key)
{
    if (Node == NULL) return newNode(key);
    if (key < Node->key)
        Node->left  = insert(Node->left, key);
    else
        Node->right = insert(Node->right, key);
    return Node;
}


void inorder(Node * root,int k){ //post

    if(!root)
        return;
    stack<Node *> s;
    int done=1;
    int c=0;
    while(done){

        if(root!=NULL){
            s.push(root);
            root=root->left;
        }
        else{if(!s.empty()){
            Node * temp= s.top();
           // cout<<temp->key;
            c++;
            if(c==k)
                cout<<temp->key;
            root=temp;
            root=root->right;;
            s.pop();
        }
        else
            done=0;


    }
    }
}




// Drikeyer program to test abokeye function
int main()
{
    int key = 65;    //Key to be searched in BST

   /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    Node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    inorder(root,3);



return 0;

}

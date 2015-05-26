#include <iostream>
#include <stdio.h>
#include <vector>
#include <list>
#include <stack>
#include <malloc.h>
#include <algorithm>
using namespace std;

struct node{
  int v;
  node * next;
};
node* push(node* &head, int k){
    node * l= (node*)malloc(sizeof(node));
    l->next=head;
    l->v=k;
    head=l;

    return head;
}
node * sorted(node* &head){
    int count[3]={0};
    node * temp1=head;
    node * temp=head;
    node * temp3=head;
    node * temp2=head;
    list<int> a;
    while(temp1!=NULL){
        //count[temp1->v]++;

        a.push_back(temp1->v);
        temp1=temp1->next;
    }/*
    int i=0;
    while(temp!=NULL){
        if(!count[i])
            i++;
        else{
            temp->v=i;
            temp=temp->next;
            --count[i];
        }
    }*/
    a.sort();
    //a.reverse();
    //reverse(a.begin(),a.end());
    list<int> :: iterator it;
    for(it=a.begin();it!=a.end();++it){
        temp3->v=*it;
        temp3=temp3->next;
    }
    //while


    return head;

}

int main(){

    node * head=(node*)malloc(sizeof(node));
    head=NULL;

    head=push(head,0);
    head=push(head,2);
    head=push(head,1);
    head=push(head,0);
    head=push(head,0);
    head=push(head,2);
    int a[]={1,2,3,4};
    int size=sizeof(a)/sizeof(a[0]);
    vector<int> v(a,a+size);
    cout<<v[0]<<v[1];
    /*head=sorted(head);
    while(head!=NULL){
        cout<<head->v;
        head=head->next;


    }*/
return 0;


}

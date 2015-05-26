#include <iostream>
#include <stdio.h>
#include <malloc.h>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
    int v;
    node * next;
};

node * push(node * &head,int k){
    node * node2= (node*)malloc(sizeof(node));
    node2->v=k;
    node2->next=head;
    head=node2;
    return head;
}
void sum(node * &head1,node * &head2){
    //cout<<"a";
    list<int> l1;
    list<int> l2;
    list<int> l3;
    node * cur1= head1;
    node * cur2= head2;
    int carry=0,sum=0;

    while(cur1){
        l1.push_front(cur1->v);
        cur1=cur1->next;
       //cout<<l1.front()<<" "<<endl;
    }
    while(cur2){
        l2.push_front(cur2->v);
        cur2=cur2->next;
        //cout<<l2.front()<<" "<<endl;
        }
    while(!l1.empty()&&!l2.empty()){
        sum=carry+l1.front()+l2.front();
        l1.pop_front();
        l2.pop_front();
        carry=sum/10;
        sum=sum%10;
        //cout<<sum<<endl;
        l3.push_front(sum);
    }
    if(!l1.empty()){
        sum=carry+l1.front();
        l1.pop_front();
        carry=sum/10;
        sum=sum%10;
        l3.push_front(sum);}

    else if(!l2.empty()){
        sum=carry+l2.front();
        l2.pop_front();
        carry=sum/10;
        sum=sum%10;
        l3.push_back(sum);
    }
    //reverse(l3.begin(),l3.end());
    list<int>:: iterator it;
    for(it=l3.begin();it!=l3.end();++it)
        cout<<*it;

}


int main(){

    int arr1[] = {4, 2, 1};
    int arr2[] = {1, 8};
    vector<int> v(arr1,arr1+3);
    cout<<v[0]<<endl;
    //int i=5;
   // i = i++ + ++i;
   // cout<<i<<endl;
   //sort(arr1,arr1+3);
  // cout<<arr1[0];
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    node *head1= NULL;
    node *head2= NULL;
    for(int i=size1-1;i>=0;i--){
        head1=push(head1,arr1[i]);
    }
    for(int i=size2-1;i>=0;i--){
        head2=push(head2,arr2[i]);
    }
    sum(head1,head2);


return 0;
}

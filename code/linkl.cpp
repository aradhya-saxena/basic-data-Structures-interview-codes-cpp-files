#include<iostream>
#include<stdio.h>
#include <malloc.h>
#include <map>
#include <vector>

using namespace std;

int main(){

   /* int p[6]={10,14,22,3};

    //printf("%d",&p[0]);
    int c=*(p++);
    printf("%d",c);
int a=10,b=10;*/
 map<int, vector <int> > m;
 m[0].push_back(1);
 m[0].push_back(2);

 if(m[1].size()==0)
    m[1].push_back(1);
    cout<<m.size();
 vector<int> :: iterator it;
 map<int, vector <int> >::iterator a;
 for(a=m.begin();a!=m.end();a++){
     int b=a->first;
    for(it=m[b].begin();it<m[b].end();++it)
        cout<<*it<<endl;
 }
//printf("%d",c);
return 0;
}


/*
struct node{
    int v;
    node *next;
};

void swap(int &a,int &b){
int c=a+b;
cout<<c;
}

node * insert(node * & head,int k){
    node * ptr=(node*)malloc(sizeof(node));
    ptr->v=k;
    ptr->next=NULL;
    head->next=ptr;
    return ptr;

}

void reverse(node * ptr){

    if(!ptr)
        return;
    reverse(ptr->next);
    cout<<ptr->v;
}
node * dup(node * &head){
    node *cur=head;
    if(!head)
        return NULL;
    while(head!=NULL||head->next!=NULL){
        if(head->v==head->next->v){
            head->next==head->next->next;
            free(head->next);

        }
        else
        head=head->next;
    }
    return cur;
}
int main(){
    //node *ptr;
    node * ptr=(node*)malloc(sizeof(node));
    node * head=(node*)malloc(sizeof(node));
    ptr->v=0;
    head=ptr;
    for(int i=1;i<5;i++){
        head=insert(head,i);
        head=insert(head,i);

        head=insert(head,i);

    }
    node * h=dup(ptr);

    //int a=10;int b=10;
    //swap(a,b);
    while(h->next!=NULL)
        {
            cout<<h->v;
            h=h->next;
        }
       // reverse(ptr);

return 0;
}*/

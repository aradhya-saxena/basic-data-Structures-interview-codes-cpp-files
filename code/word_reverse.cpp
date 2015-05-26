#include <iostream>
#include <string.h>
#include <string>
#include <cstring>
#include <stdio.h>
#include <algorithm>
using namespace std;
/*
void swap(char *k,int i,int j){
cout<<k<<i<<j;
    while(i<j){
        char temp= k[i];
        cout<<"a"<<strlen(k)<<"\nasdf"<<i<<k[i]<<j<<"\n";
        if(k[3]==' ')
            cout<<9;
        else cout<<k[3];

        k[i]=k[j];
        cout<<"b";
        k[j]=temp;
        i++;
        j--;

    }
    cout<<"\ndfsafsddfsad";

}
void reverse(char* &s){

   // char *temp=s;
   cout<<s;
    int l= strlen(s);
    int j=0;
    //swap(s,0,l-1);
    cout<<"\naaaaaa";
    while(s[j]==' ')
        j++;
    cout<<"\nbbaaaa"<<l;
    int temp;
    temp=j;
    for(int i=j;i<l;i++){
        if(s[i]==' '){
            swap(s,temp,i);
            temp=i+1;
        }
    }
    cout<<s;

}








int main(){

    int n;
    //cin>>n;
   // cin.ignore();
    //char s[50];
   // scanf("%s",s);
    //gets(s);
    //cout<<s;
    char *s="jok kg";
    //gets(s);
    //cout<<s;
  // reverse(s);
    // s="ghfj";
     string a;
     a=s;
     char *b= new char[30];
     strcpy(b,a.c_str());
     cout<<b;
     //cout<<a;
    //char temp;
//char    temp=' ';
    //s[2]=s[1];
     //cout<<s[2]<<"dsajflskud";
   //cout<<s;



return 0;

}*/

void fun(char *a,char *b){

     *a=*a^*b;
     *b=*a^*b;
     *a=*a^*b;
}

int main(){

char b[]="sax";
fun(&b[0],&b[1]);
cout<<b;
return 0;
}



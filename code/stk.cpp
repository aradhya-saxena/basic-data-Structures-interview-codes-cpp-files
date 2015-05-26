#include <iostream>
#include <stack>
#include <stdio.h>
#include <string.h>
using namespace std;

bool match(char s1[]){

    stack<char> s;
    s.push(s1[0]);
    cout<<s.top()<<endl;
    for(int i=1;i<strlen(s1);i++){
       if(s1[i]=='{'||s1[i]=='('||s1[i]=='[')
           s.push(s1[i]);
        else
         if(s1[i]=='}'||s1[i]==')'||s1[i]==']'){
            char a= s.top();
            cout<<s1[i];
            cout<<endl<<a;
            if(a==s1[i]){
                cout<<s1[i];
                s.pop();
            }else return false;
         }
    }
    if(s.empty())
        return true;
    return false;
}


int main(){

char *s="[]";
bool a= match(s);
cout<<a;
return 0;
}

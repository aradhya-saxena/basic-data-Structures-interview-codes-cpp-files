#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){


/*string s="aradhya";
s.append("saxena");
//getline(cin,s);
cout<<s<<endl;
//cout<<j;
*/
string s;
getline(cin,s);
int a[27]={0};
int flag=0;
//tolower(s);tolower is character wise
for(int i=0;i<s.length();i++){
    if(a[s[i]-'a']==0)
        a[s[i]-'a']++;
    else
        {
            flag=1;
            break;
        }
}
if(flag)
    cout<<"not";
else
    cout<<"yes";



return 0;
}

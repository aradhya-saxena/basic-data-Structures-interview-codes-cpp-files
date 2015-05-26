#include <iostream>
#include <algorithm>
#include <list>
#include <cstring>
#include <vector>
using namespace std;

int fun(char *s){
 //char w[10]="puneet";

int l1=strlen(s);
int l2=sizeof(s)/sizeof(s[0]);
//int l3= s.length();
cout<<l1<<endl<<l2;
return 0;
}
int main(){
char *s="puneet";
fun(s);

return 0;
}

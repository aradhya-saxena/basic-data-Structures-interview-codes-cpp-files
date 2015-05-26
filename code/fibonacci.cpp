#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int fib(int n){

    if(n==1)
        return 1;
    if(n==0)
        return 0;

    return fib(n-1)+fib(n-2);
}
int fib2(int n){

    int *f= new int[n+1];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++){

        f[i]=f[i-1]+f[i-2];

    }
    cout<<f[n];
}



int main(){
//int f=fib(4);
int a[10];


//cout<<a[0];
fib2(4);

cout<<f;
return 0;
}

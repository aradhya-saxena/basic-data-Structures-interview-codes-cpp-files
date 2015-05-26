#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){

    int a[]={1,2,7,3,5,8,10,9};
    int l= sizeof(a)/sizeof(a[0]);
    vector<int> lis(l,1);



    for(int i=1;i<l;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j] && lis[i]<lis[j]+1){
                lis[i]=lis[j]+1;
            }
        }
    }
    int max=*max_element(lis.begin(),lis.end());
    cout<<max<<endl;
    vector<int> index;
    int temp=max;

    for(int i=l-1;i>=0;i--){
        if(lis[i]==temp)
            {index.push_back(a[i]);
            temp--;}
    }

    reverse(index.begin(),index.end());
    vector<int>:: iterator i;
    for( i=index.begin();i<index.end();i++)
        cout<<*i;



return 0;
}

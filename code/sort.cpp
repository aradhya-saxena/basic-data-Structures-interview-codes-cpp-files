#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

int main(){
    vector<int> a;
    a.push_back(2);
    a.push_back(1);
    a.push_back(3);
    sort(a.begin(),a.end());
    //list a//a.sort();
    /*int b = a.front();
    cout << b << endl;
    */
    vector<int>::iterator it;
    for(it=a.begin();it!=a.end() ;it++){

            cout<<*it;
    }
return 0;
}

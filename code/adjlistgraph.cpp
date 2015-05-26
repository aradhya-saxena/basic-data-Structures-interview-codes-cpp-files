#include <iostream>
#include <list>
#include <string.h>
#include <cstdlib>
using namespace std;

int main(){
    list<int> Graph[5];
    Graph[0].push_back(1);
    cout<<Graph[0].front();

return 0;}

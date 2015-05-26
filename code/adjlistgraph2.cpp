#include <iostream>
#include <list>
#include <string.h>
#include <cstdlib>
using namespace std;

struct Graph{

    list <int> adjlist;
};
int main(){
    int n=3;
    Graph * graph = new Graph[3];//(Graph*)malloc(n*sizeof(Graph));

    /*
    Never use malloc if stl object inside structure eg list here..use new

    */

    graph[0].adjlist.push_back(2);
    graph[1].adjlist.push_back(2);
    graph[2].adjlist.push_back(0);
    for(int i=0;i<=2;i++){
        list<int>::iterator it;
        for(it=graph[i].adjlist.begin(); it!=graph[i].adjlist.end();++it)
            cout<<*it;
    }
return 0;
}




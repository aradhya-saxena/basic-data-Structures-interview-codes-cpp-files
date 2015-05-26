#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
using namespace std;
int dfs(int a,vector< vector<int> >  &graph,int visited[]){

    visited[a]=1;
   // cout<<a;
    vector<int>::iterator it;

    for(it=graph[a].begin();it<graph[a].end();++it){
        if(!visited[*it])
            dfs(*it,graph,visited);
    }



}
int main(){

    int v= 5;
    vector< vector<int> > graph(5);


   int visited[5]={0};

    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(0);
    graph[2].push_back(0);
    graph[1].push_back(3);
    graph[3].push_back(4);int c=0;
    for(int i=0;i<5;i++){

        if(!visited[i])
        {
            c++;
            dfs(i,graph,visited);
        }

    }
    cout<<c;

    return 0;
}

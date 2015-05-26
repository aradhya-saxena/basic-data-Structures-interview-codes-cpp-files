#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
using namespace std;

int dfs(int a, vector< vector<int> > &graph, int visited[5]){
    visited[a]=1;

    vector<int>::iterator it;
    for(it= graph[a].begin();it<graph[a].end();++it){
        if(visited[*it]){
            return 1;
        }
        else
        {
            if(dfs(*it,graph,visited))
                return 1;
        }
    }
   return 0;

}

int main(){
    int v= 5;
    vector< vector<int> > graph(5);
    int visited[5]={0};
    graph[0].push_back(1);
    graph[0].push_back(4);
    graph[1].push_back(2);
   // graph[2].push_back(3);
   // graph[3].push_back(0);
   // graph[1].push_back(4);

    if(dfs(0,graph,visited))
        cout<<"cycle";
    else
        cout<<"nocycle";
    return 0;
}

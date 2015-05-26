#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
using namespace std;


//int visited[5]={0};
deque<int> q;

int bfs(int a,vector< vector<int> > &graph,int visited[]){

    visited [a]=1;
    q.push_back(a);

    while(!q.empty()){
        int front=q.front();
        cout<<front<<' ';


        vector<int>::iterator i;
        for(i=graph[front].begin();i<graph[front].end();++i){
            if(!visited[*i]) //continue;
            //else
            {   visited[*i]=1;
                q.push_back(*i);
            }
        }
         q.pop_front();
    }


 /*for(int i=0;i<5;i++){
        if(graph[v][i]==1&&!visited[i])
            dfs(i,graph);
    }
*/
}



int main(){

    int v;
    cin>>v;
    vector< vector<int> > graph(v);
   // vector<int> graph[5];
    int visited[v];
    for(int i=0;i<v;i++)
        visited[i]=0;
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(0);
    graph[2].push_back(0);
    graph[1].push_back(3);
    graph[1].push_back(4);
    //cout<<graph[0].front();
   bfs(0,graph,visited);
    return 0;
}

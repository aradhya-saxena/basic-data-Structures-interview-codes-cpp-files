#include <iostream>
#include <algorithm>
#include <deque>
#include <list>
using namespace std;


int visited[5]={0};
deque<int> q;

int bfs(int a,list< list<int> > &graph){

    visited [a]=1;
    q.push_back(a);

    while(!q.empty()){
        int front=q.front();
        cout<<front<<' ';
        q.pop_front();

        list<int>::iterator i;
        for(i=graph[front].begin();i<graph[front].end();++i){
            if(visited[*i]) continue;
            else
            {   visited[*i]=1;
                q.push_back(*i);
            }
        }
    }


}



int main(){

    int v= 5;
    list< list<int> > graph(5);

    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(0);
    graph[2].push_back(0);
    graph[1].push_back(3);
    graph[1].push_back(4);

    bfs(0,graph);
    return 0;
}

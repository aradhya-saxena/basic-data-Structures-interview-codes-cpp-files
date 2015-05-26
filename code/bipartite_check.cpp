#include <iostream>
#include <algorithm>
#include <deque>
#include <queue>
#include <vector>
using namespace std;
#define V 4
int visited[4]={0};
int colour[4]={0};
int bfs(int a,int G[][V]){

    visited[a]=1;
    colour[a]=1;
    queue<int> q;
    q.push(a);
    while(q.empty()){
        int a= q.front();
        q.pop();
        for(int i=0;i<V;i++){
            if(G[a][i]==1 && !visited[i]){
                if(colour[i]!=colour[a]){
                    colour[a]=1-colour[i];
                    q.push(i);
                    visited[i]=1;
                }
                else
                    return 0;
            }
        }

    }
    return 1;



}


int main(){

    int G[][V] = {{0, 1, 0, 1},
            {1, 0, 1, 0},
            {0, 1, 0, 1},
            {1, 0, 1, 0}
        };
    int v=0;
    v = bfs(0,G);
    if(v)
        cout<<"bi";
    else
        cout<<"nobi";

return 0;
}


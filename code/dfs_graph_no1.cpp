#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector< vector<int> > v(5);
void dfs(int a,int graph[][5],int visited[],int k){
    visited[a]=1;
    v[k].push_back(a);
    //cout<<a;
    for(int i=0;i<5;i++){
        if(graph[a][i]&&!visited[i])
            {
            dfs(i,graph,visited,k);
            //c++;
            //cout<<endl<<c;
            }
    }
//return c;


}
int main(){

    int graph[5][5]={{0,1,0,0,0},
                    {1,0,0,0,0},{0,0,0,1,1},{0,0,1,0,0},{0,0,1,0,0}};


    int i=0;int c=0,temp=0;
    int visited[5]={0};
    for(i=0;i<5;i++){
        if(!visited[i]){
             dfs(i,graph,visited,i);
        }
    }

    vector<int>::iterator it;int max=0;
    for(int i=0;i<5;i++){
        if(v[i].size())
        {for(it=v[i].begin();it<v[i].end();++it)
                    cout<<*it;
            cout<<endl;}
        //int size=v[i].size();
        //if(size>max)max=size;
    }
   // cout<<endl<<max;


return 0;
}

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
using namespace std;

int visited[5]={0};
//dfs and number of connected components

int dfs(int v,int c,int **graph){//int graph[][5]

    visited[v]=1;
    cout<<v;
    for(int i=0;i<5;i++){
        if(graph[v][i]==1&&!visited[i])
            {   c++;
                dfs(i,c,graph);
            }
    }
return c;
}


int main(){

    int m,n;
    int count=0;
    cin>>n;
    cin>>m;
    int **graph = new int*[n];

    for(int i=0;i<n;i++)
        graph[i]=new int[m];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>graph[i][j];
        }
        cout<<endl;
    }
    int c=0;int temp=0;
    //dfs(0,graph);// connected component
    for(int i=0;i<m;i++)
        {   c=0;
            if(!visited[i]){
                temp=c;
                c=dfs(i,c,graph);
                count+=1;
                if(c>temp)
                    temp=c;
                }
        }
        cout<<endl<<temp;

return 0;
}

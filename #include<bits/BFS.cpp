#include<bits/stdc++.h>
using namespace std;

#define MX 100

vector<int> graph[MX];
int visited[MX];
int d[MX];

void bfs(int source){

    queue<int> q;
    q.push(source);
    visited[source]=1;
    d[source]=0;

while(!q.empty()){

    int v=q.front();
    q.pop();
    cout<<v<<" ";
    for(int i=0;i<graph[v].size();i++){
        int next = graph[v][i];
        if(visited[next]==0){
            q.push(next);
            visited[next]=1;
            d[next] = d[v]+1;
        }
}

}


}


int main(){

int node,edge,u,v;

cin>>node>>edge;

for(int i=0;i<edge;i++){
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
}

bfs(0);
cout<<"\nFrom 0 distance of ";
for(int i=0;i<node;i++){
    cout<<i<<" is "<<d[i]<<endl;
}




return 0;
}




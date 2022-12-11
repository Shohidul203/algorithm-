#include<bits/stdc++.h>
using namespace std;

#define MX 100
vector<int> graph[MX];
int visited[MX];

vector<int> result;

void dfs(int source){

visited[source]=1;

for(int i=0;i<graph[source].size();i++){
        int next = graph[source][i];
        if(visited[next]==0){
            dfs(next);
        }


}
 result.push_back(source);
}


int main(){

int node,edge,u,v;

cin>>node>>edge;

for(int i=0;i<edge;i++){
    cin>>u>>v;
    graph[u].push_back(v);
}

for(int i=1;i<=node;i++){
        if(visited[i]==0){
                dfs(i);
        }

}
reverse(result.begin(),result.end());
cout<<"Topological Order"<<endl;

for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
}

return 0;
}



#include<iostream>
#include<vector>
using namespace std;

void dfs(vector<vector<int> >& graph , vector<bool>& visited , int u){
    visited[u]=true;
    cout<<u<<" ";

    for(auto v : graph[u]){
        if(!visited[v]){
            dfs(graph,visited,v);
        }
    }
}

int main(){
    int n , e;
    cout<<"Enter the number of nodes ans edges : ";
    cin>>n>>e;
    cout<<"\n";

    vector<vector<int> >graph(n);
    cout<<"Enter the edges: ";
    for(int i = 0 ; i < e ; i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);    //Undirected Graph
    }
    cout<<"\n";

    int i ;
    cout<<"Enter the starting edge :";
    cin>>i;
    
    vector<bool>visited(n);

    dfs(graph,visited,i);

}
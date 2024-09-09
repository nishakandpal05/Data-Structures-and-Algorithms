#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void bfs(vector<vector<int> >& graph , int src , int v){
    vector<int>visited(v,0);
    queue<int>q;
    q.push(src);
    visited[src]=1;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        cout<<temp;
        for(int i : graph[temp]){
            if(visited[i]==0){
                q.push(i);
                visited[i]=1;
            }
        }
    }

}

int main(){
    int v,e;
    cout<<"Enter the number of vertex and edges :";
    cin>>v>>e;
    cout<<"\n";
    vector<vector<int> >graph(v);
    cout<<"Enter the edges of the graph :";
    for(int i = 0 ; i < e ; i++){
        int from,to;
        cin>>from>>to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    cout<<"\n";
    int src;
    cout<<"Enter the source vertex :";
    cin>>src;
    cout<<"\n";

    bfs(graph,src,v);

    return 0;

}

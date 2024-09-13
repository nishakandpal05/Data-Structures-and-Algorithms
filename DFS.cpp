#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void dfs(vector<vector<int> >& graph , int src , int v){
    vector<bool>visited(v,false);
    stack<int>s;
    s.push(src);
    visited[src]=true;

    while(!s.empty()){
        int temp = s.top();
        s.pop();
        cout<<temp;
        for(auto i : graph[temp]){
            if(!visited[i]){
                s.push(i);
                visited[i]=true;
            }

        }
    }
}

int main(){
    int v,e;
    cout<<"Enter the number of verticies and edges :";
    cin>>v>>e;
    vector<vector<int> >graph(v);
    cout<<"Enter the edges :";
    for(int i = 0 ; i < e ; i++){
        int from , to;
        cin>>from>>to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    int src ;
    cout<<"Enter the source vertex :";
    cin>>src;

    dfs(graph,src,v);

    return 0;
}









































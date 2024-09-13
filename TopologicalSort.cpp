#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void dfs(vector<vector<int> >&graph , vector<bool>& visited , stack<int>& s , int i){
    visited[i]=true;
    for(auto x : graph[i]){
        if(!visited[x]){
            dfs(graph,visited,s,x);
        }
    }
    s.push(i);
}

vector<int>topologicalSort(vector<vector<int> >&graph , int v){
    vector<bool>visited(v,0);
    vector<int>sorted;
    stack<int>s;
    for(int i = 0 ; i < v ; i++){
        if(!visited[i]){
            dfs(graph,visited,s,i);
        }
    }
    while(!s.empty()){
        sorted.push_back(s.top());
        s.pop();
    }
    return sorted;
}

int main(){
    int v,e;
    cout<<"Enter the number of vertices and edges :";
    cin>>v>>e;

    vector<vector<int> >graph(v);
    cout<<"Enter the edges :";
    for(int i = 0 ; i < e ; i++){
        int from , to;
        cin>>from>>to;
        graph[from].push_back(to);
    }
    vector<int>sortedOrder;
    sortedOrder = topologicalSort(graph,v);
    for(auto ele : sortedOrder){
        cout<<ele<<" ";
        
    }
    return 0;
}




#include<iostream>
#include<vector>
using namespace std;

class disjointSet{
    private:
    vector<int>parent;
    vector<int>rank;

    public:
    disjointSet(int n){
        parent.resize(n);
        rank.resize(n,0);
        for(int i = 0 ; i < n ; i++){
            parent[i]=i;
        }
    }
    int find(int x){
        if(parent[x]!=x){
            parent[x]=find(parent[x]);
        }
        return parent[x];
    }
    void unionSet(int x ,int y){
        int rootX = find(x);
        int rootY = find(y);
        if(rootX!=rootY){
            if(rank[rootX]<rank[rootY]){
                parent[rootX]=rootY;
            }
            else if(rank[rootX]>rank[rootY]){
                parent[rootY]=rootX;
            }
            else{
                parent[rootY]=rootX;
                rank[rootX]++;
            }
        }
    }


};

int main(){
    int n ;
    cout <<"Enter the number of elements :";
    cin>>n;

    disjointSet ds(n);

    int m;
    cout<<"Enter the number of union operations :";
    cin>>m;

    cout<<"Enter the pair to perform union operations";
    cout<<"\n";
    for(int i = 0 ; i < m ; i++){
        int x,y;
        cout<<"Enter the pair of elements :";
        cin>>x>>y;
        ds.unionSet(x,y);
    }
    int q ;
    cout<<"Enter the number of queries :";
    cin>>q;
    for(int i = 0 ; i < q ; i ++){
        int x,y;
        cout<<"Check pair " <<i+1<<":";
        cin>>x>>y;
        cout<<"Are "<<x<<" and "<<y<<" in same set ?"<<(ds.find(x)==ds.find(y)?" Yes":" No");
        cout<<"\n";
        
    }
    return 0;


}
#include<iostream>
#include<unordered_map>
#include<vector>
#include<set>
using namespace std;



class graph{
public:
unordered_map<int,vector<pair<int,int>>> adj;
set<pair<int,pair<int,int>>> edgeSet;
void addedge(int u,int v, int w){
    
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
    

}

void addEdgeSet(int u,int v, int w){

    edgeSet.insert({w,{u,v}});
}

};

void createData(vector<int> &parent,int rank[],int n){

    for(int i=0;i<n;i++){
        parent[i]=i;
        rank[i]=0;
    }
}

int findParent(vector<int> parent,int i){
    if(parent[i]==i){
        return i;
    }
    return findParent(parent,parent[i]);
}

void createUnion(vector<int> &parent,int rank[],int x,int y){
    int px = findParent(parent,x);
    int py = findParent(parent,y);
    if(px != py){
        if(rank[px]>rank[py]){
            parent[py]=px;
            rank[px]+=rank[py];}
        else if(rank[py]>rank[px]){
            parent[px]=py;
            rank[py]+=rank[px];
        }
        else{
            parent[py]=px;
            rank[px]++;
        }}
}

int main(){
    int n,m;
    cin>>n>>m;
    int u,v,w;
    vector<int> parent(n);
    int rank[n];
    createData(parent,rank,n);
    graph a;
    for(int i=0;i<m;i++){
        cin>>u>>v>>w;
        a.addEdgeSet(u,v,w);
    }
    for(auto i:a.edgeSet){
        int x = i.second.first;
        int y = i.second.second;
        int w = i.first;
        if(findParent(parent,x)!=findParent(parent,y)){
            createUnion(parent,rank,x,y);
            cout<<x<<" "<<y<<" "<<w<<endl;
        }
        
    }

    return 0;
}
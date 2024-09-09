#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<climits>

using namespace std;

#define pii pair<int,int>
#define mipi unordered_map<int,vector<pair<int,int>>>

class graph{
public:
unordered_map<int,vector<pair<int,int>>> adj;

void addedge(int u,int v, int w){
    //direction = 0 undirected graph
    //direction =1 directed graph
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
    

}
};


vector<int> Dijkstras(mipi adj ,int src , int n){

    set<pair<int,int>> dset;
    vector<int> dist(n+1,INT_MAX);
    dist[src] = 0;
    dset.insert({0,src});
    while(!dset.empty()){
        int top = dset.begin()->second;
        dset.erase(dset.begin());
        for(auto i:adj[top]){  //
        if(dist[i.first]>dist[top] + i.second){
           dist[i.first] = dist[top]+i.second;
           dset.insert({dist[i.first],i.first});
        }
        }
        
    }
    return dist;
    

}

int main(){

    graph a;
   a.addedge(0,1,7);
   a.addedge(0,2,1);
   a.addedge(0,3,2);
   a.addedge(1,2,3);
   a.addedge(1,3,5);
   a.addedge(1,4,1);
   a.addedge(3,4,7);


    vector<int> ans = Dijkstras(a.adj,0,4);

    for(auto i:ans){
        cout<<i<<" ";
    }

    return 0;
}
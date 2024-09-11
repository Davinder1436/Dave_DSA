#include<iostream>
#include<set>
#include<unordered_map>
#include<vector>
#include<climits>
using namespace std;


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



vector<int> prims(unordered_map<int,vector<pair<int,int>>> adj,int v,int n){
    vector<int> mst(n,0);
    vector<int> key(n,INT_MAX);
    vector<int> parent(n,-1);

    parent[v] = -1;
    key[v] = 0;

    set<pair<int,int>> s;
    s.insert({0,v});
    while(!s.empty()){
        int top = s.begin()->second;
        s.erase(s.begin());
        mst[top]=1;
        for(auto i:adj[top]){
            
            if(mst[i.first]==0 && key[i.first]>i.second){
            s.erase({key[i.first],i.first});
            key[i.first ]=i.second;
            s.insert({i.second,i.first});
            parent[i.first] = top;
        }
}


}
return key;

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


    vector<int> ans = prims(a.adj,0,5);

    for(auto i:ans){
        cout<<i<<" ";
    }


    return 0;
}

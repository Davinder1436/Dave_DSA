#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
class graph{
public:
unordered_map<int,list<int>> adj;
vector<vector<int>> matrix;
void addedge(int u,int v,bool direction){
    //direction = 0 undirected graph
    //direction =1 directed graph
    adj[u].push_back(v);
    // matrix[u][v]=1;
    if(!direction){
        adj[v].push_back(u);
        
        // matrix[v][u]=1;
        
    }

}
void printadj(){
    for(auto i:adj){
        cout<<i.first<<" -> ";
        for(auto j:i.second){
                cout<<j<<",";
        }
        cout<<endl;
    }

}
};
void shortest_path(unordered_map<int,list<int>>adj,int vertex,int target){
unordered_map<int,bool> visited;
vector<int>parent;
stack<int>printer;
queue<int> Q;
parent[vertex]=-1;
Q.push(vertex);
visited[vertex]=1;
while(!Q.empty()){
    
        for(auto i:adj[Q.front()]){
        if(visited[i]==0){
            Q.push(i);
            visited[i]=1;
            parent[i]=Q.front();

            }}
        
    }Q.pop();


int i=target;
while(i!=vertex){
    cout<<i<<"<-";
    i=parent[i];
}}
// while(!printer.empty()){
//                     cout<<printer.top()<<"->";
//                     printer.pop();
//                 }






int main(){
    graph a;
a.addedge(1,2,false);
a.addedge(1,3,false);
a.addedge(1,4,false);
a.addedge(2,5,false);
a.addedge(3,8,false);
a.addedge(5,6,false);
a.addedge(4,7,false);
a.addedge(6,8,false);
a.addedge(7,9,false);
a.addedge(9,8,false);
shortest_path(a.adj,1,8);
    return 0;
}
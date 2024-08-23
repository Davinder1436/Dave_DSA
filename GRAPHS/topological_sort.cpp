#include<iostream>
#include<stack>
#include<unordered_map>
#include<list>
#include<vector>

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

void topological_sort(unordered_map<int,list<int>>adj,int vertex,unordered_map<int,bool>&visited,stack<int> &cont){

visited[vertex]=true;

for(auto i:adj[vertex]){
    if(!visited[i]){
        topological_sort(adj,i,visited,cont);
    }
}
 cont.push(vertex); 

}

int main(){
unordered_map<int,bool>visited_b;

graph b;
b.addedge(1,2,true);
b.addedge(2,3,true);
b.addedge(2,7,true);
b.addedge(3,6,true);
b.addedge(3,4,true);
b.addedge(4,5,true);
b.addedge(5,8,true);
b.addedge(1,4,true);
//  b.printadj();
stack<int> cont;
// b.printadj();
topological_sort(b.adj,1,visited_b,cont);
while (!cont.empty()){
    cout<<cont.top()<<" ";
    cont.pop();
}
    return 0;

}

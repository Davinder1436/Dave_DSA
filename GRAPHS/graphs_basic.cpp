#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class graph{
public:
unordered_map<int,list<int>> adj;


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


// BFS -> breadth first search

void BFS(unordered_map<int,list<int>> adj,int vertex){
    unordered_map<int,int> visited;
    queue<int> Q;
    Q.push(vertex);
    visited[vertex]=1;
    while(!Q.empty()){
        for(auto i:adj[Q.front()]){
            if(visited[i]==0){
                Q.push(i);
                visited[i]=1;
                
            } 
        }
    cout<<Q.front();
    Q.pop();
    }

}
void DFS(unordered_map<int,list<int>> adj,int vertex,unordered_map<int,bool>&visited){
    visited[vertex]=true;
    cout<<vertex<<" ";
    
    for(auto i:adj[vertex]){
            if(!visited[i]){
                DFS(adj,i,visited);}
    }
}
bool cycle_detect_bfs(unordered_map<int,list<int>> adj,int vertex)
{unordered_map<int,int> visited;
    queue<int> Q;
    Q.push(vertex);
    visited[vertex]=1;
    while(!Q.empty()){
        int count=0;
        for(auto i:adj[Q.front()]){
            if(visited[i]==1&&count<2){
                    count++;
                    if(count==2){return true;}
                    continue;
                
            }
            else if(visited[i]==0){
                Q.push(i);
                visited[i]=1;  
            } 
        }
    Q.pop();
    }return false;
    }

bool cycle_detect_dfs(unordered_map<int,list<int>> adj,int vertex,unordered_map<int,bool>&visited,int parent)
{
    visited[vertex]=true;
    for(auto i:adj[vertex]){
            if(!visited[i]){
                if(cycle_detect_dfs(adj,i,visited,vertex)){
                return true;
            }
            
        }
        else if(i!=parent){
            return true;
        }
    }
return false;
}
bool cycle_detect_directed_dfs(unordered_map<int,list<int>> adj,int vertex,unordered_map<int,bool>&visited,unordered_map<int,bool>&incircle,int parent)
{
    visited[vertex]=true;
    incircle[vertex]=true;
    for(auto i:adj[vertex]){
        
            if(!visited[i]){
                if(cycle_detect_directed_dfs(adj,i,visited,incircle,vertex)){
                
                return true;
            }
            
        }
        else if(i!=parent&&incircle[i]){
            return true;
        }
        
        }
        incircle[vertex]=false;
        return false;
        
        }
        

int main(){

graph a;
// a.addedge(2,3,false);
// a.addedge(2,4,false);
// a.addedge(3,5,false);
// a.addedge(4,5,false);
// a.addedge(2,5,false);
// unordered_map<int,bool>visited;
// BFS(a.adj,2);
// cout<<endl;
// cout<<cycle_detect_dfs(a.adj,2,visited,2);
unordered_map<int,bool>visited_b;
unordered_map<int,bool>incircle;
graph b;
b.addedge(1,2,true);
b.addedge(2,3,true);
b.addedge(2,7,true);
b.addedge(3,6,true);
b.addedge(3,4,true);
b.addedge(4,5,true);
b.addedge(5,8,true);
b.addedge(1,4,true);
cout<<cycle_detect_directed_dfs(b.adj,1,visited_b,incircle,0);
    return 0;
}

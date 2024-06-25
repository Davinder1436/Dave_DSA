#include<iostream>
#include<queue>
#include<unordered_map>
#include<list>

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
bool bipart(){}


int main(){


    return 0;
}
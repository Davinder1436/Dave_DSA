#include<iostream>
#include<unordered_map>
#include<queue>
#include<vector>
using namespace std;

class Graph{
    public:
    unordered_map<int,vector<int>>adj;
    //directed
    void addedge(int u,int v){
        adj[u].push_back(v);
    }

    void printadj(){

        for(auto i:adj){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<",";
            }
    }}
    unordered_map<int,int> calcIndegree(){
        unordered_map<int,int>indegree;
        for(auto i:adj){
            for(auto j:i.second){
                indegree[j]++;
            }
        }
        for(auto i:adj){
            if(indegree[i.first]!=0){
                continue;
            }
            indegree[i.first]=0;
        }
        return indegree;
    }
    
    void kahn(unordered_map<int,int> indegree , vector<int> &ans){
        queue<int> Q;
       

        for(auto i:indegree){
            if(i.second==0){
                Q.push(i.first);
                indegree[i.first]=1;
            }
        }
        
        while(!Q.empty()){
            
            int node = Q.front();
            Q.pop();
            indegree[node]--;
            if(indegree[node]==0){
                for (auto i:adj[node]){Q.push(i); ;}
                ans.push_back(node);
            }
            
            
        }
        
        

    }
    
};


int main(){
    Graph a;
    a.addedge(1,2);
    a.addedge(2,3);
    a.addedge(2,7);
    a.addedge(3,6);
    a.addedge(3,4);
    a.addedge(4,5);
    a.addedge(5,8);
    a.addedge(1,4);
    unordered_map<int,int> indegree = a.calcIndegree();


    vector<int> ans;

    a.kahn(indegree,ans);
    
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}
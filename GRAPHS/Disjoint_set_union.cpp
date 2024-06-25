#include<iostream>
#include<vector>
using namespace std;




vector<int> parent;
vector<int>size;


    void make(int v){
        parent[v]=v;
        size[v]=1;
    }
    int find_set(int v){
        if(parent[v]==v){
            return v;
        }
        return find_set(parent[v]);
    }
    void union_set(int a,int b){
        a = find_set(a);
        b= find_set(b);
        if(a!=b){
            if(size[a]<size[b]){swap(a,b);
            parent[b]=a; 
            size[a]+=size[b];
            }
        }
    }
// path compression
int find_set_fast(int v){
    if(parent[v]==v){
            return v;
        }
        return find_set(parent[v]=find_set_fast(parent[v]));
}

bool cycle_detection_UDG_DSU(int u,int v){
    int x = find_set_fast(u);
    int y = find_set_fast(v);
    if(x==y){
        return true;
    }
    union_set(u,v);
    return false;

}


int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>edges;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        edges.push_back({u,v});
    }

    return 0;
}
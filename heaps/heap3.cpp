#include<iostream>
#include<queue>
#include<vector>
using namespace std;

#define pii pair<int,int>
#define vii vector<pii>
#define loop(i,a,b) for(int i =a;i<b;i++)

int main(){
    int k;
    cin>>k;
    vector<vector<int>>a(k);
    loop(i,0,k){
        int n;
        cin>> n;
        a[i]=vector<int>(n);
        for(int j=0;j<n;j++){
            
            cin>>a[i][j];
            
        }

    }
vector<int>idx(k,0);

priority_queue<int,vector<int>,greater<int>> MQ;


    return 0;
}
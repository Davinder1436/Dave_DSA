#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int N=1e6+2;
    int idx[n];
    for(int x=0;x<N;x++){ idx[x]=-1;}
    int minidx=INT_MAX;//x=ai
    for(int y=0;y<N;y++){
        if(idx[arr[y]]!=-1){minidx =min(minidx,idx[arr[y]]);}
        else{idx[arr[y]]=y;}

    }
    if(minidx==INT_MAX){cout<<-1<<" ";}
    else{cout<<minidx+1;}

    return 0;
}
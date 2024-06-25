#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool mycompare(pair<int,int>p1,pair<int,int>p2){
    return p1.first<p2.first;
}

int main(){
     int arr[]={69,30,57,2,5,3,6,9};
    vector<pair<int,int>>v;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    pair<int,int> p;
    p.first=arr[i];
    p.second=i;
    v.push_back(p);
    }
    sort(v.begin(),v.end(),mycompare);
    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;
    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){cout<<arr[i]<<" ";}

    
    
    return 0;
 }

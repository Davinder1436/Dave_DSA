#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }int curlen=2;
    int prevdif=arr[1]-arr[0];
    int ans = 0;

    for(int a=0;a<n-1;a++){
    int curdif= arr[a]-arr[a+1];
 if(curdif ==prevdif){curlen++;cout<<curlen;}
    
    
    else{ curlen =2;cout<<curlen;}
    ans =max(ans,curlen);
    
    prevdif =curdif;
    }
    cout<<endl;
    cout<<ans;
    

    return 0;}
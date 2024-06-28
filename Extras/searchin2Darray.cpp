#include<iostream>
using namespace std;
int main(){
    
    int n,m,no;
    cin>>n>>m;
    int a1[n][m];
    
    
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a1[i][j];}}cin>>no;
            // optimaized approach of sorted 2d array
    int r=0,c=m-1;
    while(r<n&&c>=0){
        if(a1[r][c]==no){cout<<"element found at"<<r<<","<<c;break;}
        else if(a1[r][c]<=no){r++;}
        else{c--;}
    }


    return 0;
}
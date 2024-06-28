#include<iostream>
using namespace std;
 bool check(int n,int**arr,int i,int j){
    for(int k=0;k<n;k++){if(arr[k][j]==1&&k<n&&j<n){return false;}
        else if(arr[i+k][j+k]==1&&i+k<n&&j+k<n){return false;}
        else if(arr[i-k][j-k]==1&&i-k>=0&&j-k>=0){return false;}
        else if(arr[i+k][j-k]==1&&i+k<n&&j-k>=0){return false;}
        else if(arr[i-k][j+k]==1&&i-k>=0&&j+k<n){return false;}
        else{return true;}}}
bool nqueen(int n,int**arr,int i)
{if(i>=n){return true;}
int k;
    for( k=0;k<n;k++){
        if(check(n,arr,i,k)){arr[i][k]=1;
        if(nqueen(n,arr,i+1)){return true;}
        
        
        arr[i][k]=0; // backtrack
        }
        }
        
        return false;

        
}
int main(){
    int n;
    cin>>n;
    
    
   int**arr=new int*[n];
   for(int i=0;i<n;i++){ arr[i]=new int[n];}
   for(int i=0;i<n;i++){for(int j=0;j<n;j++){arr[i][j]=0;}}

    
    if(nqueen(n,arr,0)){for(int i=0;i<n;i++){for(int j=0;j<n;j++){cout<<arr[i][j]<<" ";}cout<<endl;}}

    return 0;
}


    


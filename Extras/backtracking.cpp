#include<iostream>

using namespace std;

bool issafe(int n,int**arr,int x,int y){
    if(x>=n||y>=n){return false;}
    if(arr[x][y]==0){return false;}
    else if(arr[x][y]==1){return true;}

}
bool maze(int n,int**arr,int i,int j,int**sol)
{
    if(i==n-1&&j==n-1){sol[i][j]==1;
    return true;}
    if(issafe(n,arr,i,j)){sol[i][j]=1;
    
    if(maze(n,arr,i+1,j,sol)==true){sol[i+1][j]=1;
    return true;}
    if(maze(n,arr,i,j+1,sol)==true){sol[i][j+1]=1;;
    return true;}
    sol[i][j]=0;return false;
    
    }}




int main(){
    int n;
    cin>>n;
    
    
   int**a1=new int*[n];
   for(int i=0;i<n;i++){ a1[i]=new int[n];}
   for(int i=0;i<n;i++){for(int j=0;j<n;j++){cin>>a1[i][j];}}
   int**sol=new int*[n];
   for(int i=0;i<n;i++){ sol[i]=new int[n];}
   for(int i=0;i<n;i++){for(int j=0;j<n;j++){sol[i][j]=0;}}
    
    if(maze(n,a1,0,0,sol)){for(int i=0;i<n;i++){for(int j=0;j<n;j++){cout<<sol[i][j]<<" ";}cout<<endl;}}

    return 0;
}
#include<iostream>
using namespace std;
int main(){

    int n,m,p;
    cin>>n>>m>>p;
    int a1[n][m];
    
    
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a1[i][j];
            
        }
    }
  
         

         int a2[m][p];
         int ans[n][p];
         for(int i=0;i<m;i++){for(int j=0;j<p;j++){cin>>a2[i][j];}}
        for(int i=0;i<n;i++){for(int j=0;j<p;j++){ans[i][j]=0;}}
         
         for(int i=0;i<n;i++){for(int j=0;j<p;j++){
            
            for(int k=0;k<m;k++){
                ans[i][j]+=a1[i][k]*a2[k][j];

            }}}
            for(int i=0;i<m;i++){for(int j=0;j<p;j++){cout<<ans[i][j]<<" ";}cout<<endl;}
           // spiral array
    //int rs=0,re=n-1,cs=0,ce=n-1;
    //while(rs<=re&&cs<=ce){
      //  for(int i=cs;i<=ce;i++){cout<<arr[rs][i]<<" ";}rs++;
        //for(int i=rs;i<=re;i++){cout<<arr[i][ce]<<" ";}ce--;
        //for(int i=ce;i>=cs;i--){cout<<arr[re][i]<<" ";}re--;
        //for(int i=re;i>=rs;i--){cout<<arr[i][cs]<<" ";}cs++;

         //}return 0; }
        //  int Tarr[n][n];
        //  for(int i=0;i<n;i++){
            // for(int j=0;j<n;j++){
                // int temp=arr[i][j];
                // arr[i][j]=arr[j][i];
                // arr[j][i]=temp;
                
            // }cout<<endl;
        //  }         for(int i=0;i<n;i++){
            // for(int j=0;j<n;j++){
                // cout<<arr[j][i]<<" ";

                // }cout<<endl;}

 
                //matrix multiplication
return 0;
}





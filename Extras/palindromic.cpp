#include<iostream>
using namespace std;
int main(){
int a,b,c,d,n,k;
cin>>n;// a for rows and b for column n is no oof rows 
for(a=1;a<=n;a++){
    int c=2*n-1;
    for(b=1;b<=c;b++){
    if(b<=n-a||b>=n+a){cout<<" ";}
    else{ 
        if(b<=n){cout<<n-b+1;
        }
        else{cout<<b-n+1;}

        
        }




    }
cout<<endl;







}


    return 0;
}
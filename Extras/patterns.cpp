#include<iostream>
using namespace std;
int main(){


    int x,y,a,b,n;
    
    cin>>n;
    int z=1;

    for(x=1;x<=n/2;x++){
        for(y=1;y<=n;y++)
        if(y<=x||y>n-x){cout<<"* ";} 
        else{cout<<"  ";}

    
        cout<<endl;

            }
     for(a=n/2;a>=1;a--){
        for(b=1;b<=n;b++)
        if(b<=a||b>n-a){cout<<"* ";} 
        else{cout<<"  ";}
            cout<<endl;}



    return 0;}
    


    
         

#include<iostream>
using namespace std;
int main(){
    int x,y,z,a,b,c,p,q,r,n;
int count=1;
cin>>n;



for(x=1;x<=n/2;x++){
    for(y=1;y<=n; y++){
        int z=x+y;
        if(z%2==0){
        if(y<=n/2-x||y>n/2+x){
            cout<<"  ";
            }
            else{cout<<z/2-2;}
        
        }
        
        else {cout<<"  " ;
    



    }}

cout<<endl;









}

    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;

int fact(int n){
    int i;
    int factorial=1;
    for(i=2;i<=n;i++){
        factorial=factorial*i;
        


    }
    return factorial;}
int comb(int n,int r){
int combination=fact(n)/(fact(r)*fact(n-r));

return combination;

}



int main(){
//pascals triangle
int i,j,r;
cin>>r;

for(i=1;i<=r;i++){
    for(j=0;j<=i;j++){
        cout<<comb(i,j);
    }
    cout<<endl;



}



    return 0;
}

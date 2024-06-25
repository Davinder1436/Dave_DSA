#include<iostream>
using namespace std;
int npower(int n,int x){
    if(x==0){ return 1;}
    int prev= npower(n,x-1);
    return n*prev;

}
int factorial(int n){
    if(n==0){return 1;}
    int prev=factorial(n-1);
    return prev*n;

}
int main(){
int n,x;
cin>>n>>x;
cout<<npower(n,x)<<endl;
cout<<factorial(n);


    return 0;
}
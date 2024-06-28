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

int fibonacci(int n){
    if(n==0||n==1){return n;}
    int prev1=fibonacci(n-1);
    int prev2=fibonacci(n-2);
    


    return prev1 +prev2;
}
int main(){
int n;
 cin>>n;
// cout<<npower(n,x)<<endl;
// cout<<factorial(n);
cout<<fibonacci(n);

    return 0;
}
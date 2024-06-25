#include<iostream>
using namespace std;
void seive(int n){
   int prime[100]={0};
   
   for(int i=2;i<=n;i++){
    if(i*i<n){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){prime[j]=1;}}
            else{continue;}}}
    for(int i=2;i<=n;i++){if(prime[i]==0){cout<<i<<" ";}
    else{continue;}}

}
int main(){
int n;
cin>>n;
seive(n);


    return 0;
}
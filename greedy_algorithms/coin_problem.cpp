#include<iostream>
using namespace std;
// greed -> we choose largest coin first as it is best case
int no_of_coins(int a[],int k,int size){
    
    int ans=0;
    for(int i=size-1;i>=0;i--){
        ans+=k/a[i];
        k-=k/a[i]*a[i];
    }
    return ans;
    
}

int main(){
    int coins[10]={1,2,5,10,20,50,100,200,500,2000};
    int k;
    cin>>k;
    cout<<no_of_coins(coins,k,10);

    return 0;
}

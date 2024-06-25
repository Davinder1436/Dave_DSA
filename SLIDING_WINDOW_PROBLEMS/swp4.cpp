#include<iostream>

using namespace std;
// max no of perfects in subarray problem 
// perfects are those numbers whose sum of divisors is equal to itself eg: 6 = 1+2+3
bool isperfect(int x){
    int sum=0;
    if(x==1){return false;}
    for(int i=1;i<=(x/2);i++){
        if(x%i==0){sum+=i;}
        else{continue;}
    }
    if(sum==x){return true;}
    else  {return false;}

}
void max_sum(int arr[],int n,int k){
    int sum=0;
    int st=0,end=0;
    for(end=0;end<k;end++){
        sum+=arr[end];
    }
    int ans = sum;
    while(end<n){
        sum-=arr[st];
        st++;
        end++;
        sum+=arr[end];
        ans=max(sum,ans);
    }
    cout<< ans;
}

void max_perfects(int arr[],int n,int k){

    for(int i=0;i<n;i++){
        if(isperfect(arr[i])){
            arr[i]=1;
        }
        else{arr[i]=0;}
        
    }
    max_sum(arr,n,k);
    
}

int main(){
int arr[]={3,1,2,6,3,6};
max_perfects(arr,6,3);

    return 0;
}
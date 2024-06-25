#include<iostream>
#include<climits>
using namespace std;


void max_sum_subarray(int arr[],int n,int x,int k)//sum should be less than x
{int sum =0;
int start =0;
int end = k-1;
int ans = INT_MIN;
    for(int i=start;i<=end;i++){
        sum+= arr[i];
    }
if(sum<=x){ans = sum;}
while(end<n){
    sum -= arr[start];
    start++;
    end++;
    sum+= arr[end];
    if(sum<=x){
        ans = max(ans,sum);
    }
}
cout<< ans;

}
int main(){
    int arr[]={4,8,6,2,6,10,4};
    max_sum_subarray(arr,7,20,3);

    return 0;
}

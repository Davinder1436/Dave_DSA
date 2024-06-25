#include<iostream>
#include<climits>

using namespace std;
int min_size_sum_subarray(int arr[],int n,int x){
    int start=0;
    int end = 0;
    int sum = 0;
    int ans = INT_MAX;
    
    while (sum<x){
        sum += arr[end];
        end++;
    }
    
    
    while(end<n){
        int newans = end-start;
        start ++;
        sum-=arr[start];
        newans--;
        while(sum<x){
            end++;
            sum+=arr[end];
            newans++;
        }
        ans = min(ans,newans);
    }
    return ans;

}

int main(){
    int arr[]={4,5,6,5,8,7,9,2,3};
    cout<<min_size_sum_subarray(arr,9,20);
    return 0;
}
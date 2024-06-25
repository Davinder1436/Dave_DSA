#include<iostream>
#include<algorithm>
using namespace std;

bool sum_2(int arr[],int n,int target){
//arr should be sorted

int low = 0;
int high = n-1;
while(low<high){
    if((arr[low]+arr[high])==target){return true;}
    if((arr[low]+arr[high])<target){
        low++;
    }
    else{high--;}
}
return false;
}
bool sum_3(int arr[],int n,int target){
    int curr,low,high;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        curr = i;
        low=i+1;
        high = n-1;
        while(low<high){
        if((arr[low]+arr[high])==target){return true;}
        if((arr[low]+arr[high])<target){
            low++;
        }
        else{high--;}
        }

    }
    return false;

}

int main(){
    int arr[]={14,6,18,10,12,4};
    cout<<sum_3(arr,6,8);

    return 0;
}
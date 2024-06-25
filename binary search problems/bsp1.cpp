#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

bool isfeasible(int arr[],int mid,int k,int n){
int pos = arr[0];
int element = 1;
for(int i =0;i<n;i++){
    if(arr[i]-pos>=mid){
        pos =arr[i];
        element++;
        if(element ==k){
            return true;
        }
    }
}
return false;

}

int largest_min_dist(int arr[],int n,int k){
    sort(arr,arr+n);
    int result =-1;
    int left=1;
    int right = arr[n-1];
    
    while (left<right){
        int mid=(left+ right)/2;
        if(isfeasible(arr,mid,k,n)){
            result = max( result,mid);
            left = mid+1;
        }
        else{right =mid;}
    }
    return result;
}
bool ispossible(int arr[],int n,int m, int min){
    int sum=0;
    int students = 1;
    for(int i=0;i<n;i++){
        if(arr[i]>min){
            return false;
        }
        
        if(sum+arr[i]>min){
            students++;
            sum=arr[i];
            if(students>m){return false;}
         }
        else{
            sum+=arr[i];
        }
}}


int min_allocation(int arr[],int n,int m){
if(n<m){return -1;}
int sum = 0;
for(int i=0;i<n;i++){
    sum+= arr[i];
}
int start = 0,end=sum,ans=INT_MAX;
while(start<=end){
    int mid = (start+end)/2;
    if(ispossible(arr,n,m,mid)){
        ans = min(ans,mid);
        end = mid-1;
    }
    else{
        start= mid+1;
    }
    

}
return ans;
}


int painter_partition(int arr[],int n,int p)
{   
    int sum=0;
    for(int i=0;i<n;i++){
    sum+= arr[i];
}
int start =0;
int end = sum;
int ans=INT_MAX;
while(start<end){
    int mid = (start+ end)/2;
    if(ispossible(arr,n,p,mid)){
        ans = min(ans,mid);
        end=mid-1;
    }
    else{start  = mid+1;}

}
return ans;

}
int search_in_rotated_array(int arr[],int key,int left,int right){
    if(left > right){
        return -1;
    }
    int mid = (left+right)/2;
    if(arr[mid] == key){
        return mid;
    }

    if(arr[left]<=arr[mid]){
        if(key>= arr[left] and arr[mid]>=key){
            search_in_rotated_array(arr,key,left,mid-1);
        }
        return(search_in_rotated_array(arr,key,mid+1,right));

    }
    if(key>= arr[mid] and key<=arr[right]){
        return(arr,key,mid+1,right);
    }
    return search_in_rotated_array(arr,key,left,mid-1);

// agar right part of mid unsorted hai to pehle left mein search fer right mein search;
// else: agar left khraab hai to pehle right mein search than left mein search;
}
// void peek_elements(int arr,int left,int right){
// int mid=(right+left)/2;
// if(mid=0||arr[mid-1]<=arr[mid]&&(mid=n-1||arr[mid+1]<=arr[mid])){
//     cout<<mid<<" ";
// }}




int main(){
    int arr[]={22,34,45,5,12,14,19};
    cout<<search_in_rotated_array(arr,22,0,6);

    return 0;
}

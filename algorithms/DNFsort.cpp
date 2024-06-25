#include<iostream>
using namespace std;
void swap(int arr[],int n1,int n2){
    int temp=arr[n1];
    arr[n1]=arr[n2];
    arr[n2]=temp;
}

void dnf(int arr[],int n){
int low=0;
int mid=low;
int high=n-1;

while(mid<high){
    if(arr[mid]==0){swap(arr,low,mid);low++;mid++;}
    else if(arr[mid]==1){mid++;}
    else if(arr[mid]==2){swap(arr,mid,high);high--;}
    
}

}
int main(){
 int arr[9]={1,0,2,1,2,1,0,2,0};
dnf(arr,9);
for(int i=0;i<9;i++){cout<<arr[i]<<" ";}
    return 0;
}

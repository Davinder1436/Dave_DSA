#include<iostream>
using namespace std;
int inversion(int arr[],int n){
    int counter=0;
    for(int i=0;i<n;i++){for(int j=i;j<n;j++){if(arr[i]>arr[j]){counter++;}}}
    return counter;
}
void merge(int arr[],int l,int mid,int r,int counter){
    
}


void inversion2(int arr[],int l,int r,int counter){
    int mid=(r+l)/2;
    if(l<r){
        inversion2(arr,l,mid,counter);
        inversion2(arr,mid+1,r,counter);
        merge(arr,l,mid,r,counter);
    }

}



int main(){
    int counter=0;
    int arr[5]={4,7,8,2,1};
    inversion2(arr,0,4,counter);
    
    return 0;
}
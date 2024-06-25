#include<iostream>
using namespace std;
int inversion(int arr[],int n){
    int counter=0;
    for(int i=0;i<n;i++){for(int j=i;j<n;j++){if(arr[i]>arr[j]){counter++;}}}
    return counter;
}
void merge(int arr[],int l,int mid,int r,int counter){
   int n1=mid-l+1;
    int n2=r-mid;
   int a[n1];
   int b[n2];
   for(int i=0;i<n1;i++){
    a[i]=arr[l+i];
   }for(int i=0;i<n2;i++){
    b[i]=arr[mid+1+i];
   }
   int i=0;
   int j=0;
   int k=l;
   while(i<n1&&j<n2){
    if(a[i]<b[j]){arr[k]=a[i];k++;i++;}
    else {arr[k]=b[j];
    k++;j++;}
   
   }
   while(i<n1){ 
    {arr[k]=a[i];k++;i++;}}
    while(j<n2){ 
    {arr[k]=b[j];k++;j++;}}
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
    cout<<counter;
    return 0;
}
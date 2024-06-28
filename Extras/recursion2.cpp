#include<iostream>
using namespace std;



int lastocc(int n,int arr[],int i,int key){
    
    if( i==0){return -1;}
    if( arr[i]==key){return i;}
    else{return lastocc(n,arr,i-1,key);}


}


bool sorted(int n,int arr[]){
    if(n==0){ return true;}
    bool remain=sorted(n-1,arr+1);
    const int x=n;
    int next=arr[x-n+1];
    if(arr[x-n]>next){return false;}
    return ( arr[0]<arr[1]&& remain ) ;


}
void checksort(int n,int arr[]){
    if(n==0){cout<<"sorted";
    return;}
    int prev=arr[n-1];
    if(arr[n]<prev){cout<<"not sorted";
    return;}
    else
    {return checksort(n-1,arr);}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    int key;
    cin>>key;
    int i=0;
    cout<<lastocc(n,arr,i,key);

    return 0;
}
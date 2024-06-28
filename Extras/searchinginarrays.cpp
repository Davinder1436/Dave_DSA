#include<iostream>
using namespace std; 

int search(int arr[],int n,int key){int i=n/2;
if(key==arr[0]){return 0;}
    
else{ while(i>1){
        if(arr[i]>key){i/=2;}
        else if(arr[i]<key){i=(i+n)/2;}
        else if(arr[i]==key){return i;break;}
    }
}}
int main(){
    
    
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<search(arr,n,key);




}
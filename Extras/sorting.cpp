#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;

    for(i=0;i<n;i++){
            cin>>arr[i];}
            
            

    
for(int a=1;a<n;a++){
    int b = a-1;
    int current=arr[a];
    while(arr[b]>current&&b>=0){
        arr[b+1]=arr[b];
        b--;
        
    }arr[b+1]=current;
}
    
    
        


                
    
            for(int i=0;i<n;i++) 
            
    {cout<<arr[i]<<" ";} 
        



   

    return 0;}



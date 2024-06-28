#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int a=0;a<n;a++){int sum =0;
    int prevsum=0;
        for(int b=a;b<n;b++){
            
            prevsum +=arr[b];
            cout<<prevsum<<" ";
        }
    }

    return 0;
}
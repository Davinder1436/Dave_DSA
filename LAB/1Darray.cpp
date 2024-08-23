#include<iostream>
using namespace std;
int main(){
    int n;

    cin>>n;

    int arr[n];


    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }

    int se;
    cin>>se;
    for(int i=0;i<n;i++){
        if(arr[i]==se){
            cout<<"index of the element is "<<i;
            break;
        }}
    

    
    return 0;
}

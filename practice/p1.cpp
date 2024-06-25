#include<iostream>
using namespace std;

int equilibrium(int arr[],int n){
    int frontsum = 0;
    int backsum = 0;
    // backsum vich arr da sum store kar lea
    for (int i=0;i<n;i++){
        backsum += arr[i];
    }
    // start from 1 and going forward add arr[i-1] =n frontsum subtract arr[i] in backsum
    backsum -= arr[0];
    for (int i=1;i<n;i++){
        backsum -= arr[i];
        frontsum+= arr[i-1];
        if(backsum == frontsum){
            return i;
        }
    }
    return -1;
}
int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<equilibrium(arr,n);

    
}
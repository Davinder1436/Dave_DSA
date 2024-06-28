#include<iostream>
using namespace std;



int main(){
int size;
cin>> size;
int arr[size];
for(int i=0; i<size; i++){
    cin>>arr[i];
}
for(int j=0;j<size;j++){
    int key = j;
    while(arr[j+1]<arr[j]){
        int temp = arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        j--;
    }
    j=key;
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}



return 0;
}
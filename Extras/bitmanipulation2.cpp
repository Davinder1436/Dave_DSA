#include<iostream>
using namespace std;
int subset(int n,int arr[]){
    for(int i=0;i<(1<<n);i++){for(int j=0;j<n;j++)
    {if(i&1<<j){cout<<arr[j]<<" ";}}cout<<endl;}
}
int main(){
   // int n;
    // cin>>n;
    // if(((n&n-1))==0){cout<<"its power of 2";}
    // else{cout<<"not a power of 2";}--> wether a number is power of 2 or not

    //-->to count no of 1 prest in any numbers binary
    // int counter=0;
    // while(n>0){
    //     n=(n&n-1);
    //     counter++;
    // }
    // cout<<counter;

    // to cout all possible subsets of any array
    // if there are n elements there are 2^n ways and we from 0 to 2^n - 1 count
    // for 3 number possible subsets are 000 001 010 011 100 101 110 111{ 1 to 7}

// int arr[4]={1,2,3,4};
// subset(4,arr);

// to find non repeting number in an array in which else number are present twice

// int n;
// cin>>n;
//  int a[n];
 
//  for( int i=0;i<n;i++){cin>>a[i];}
//  int xorsum=0;
//  for(int i=0;i<n;i++){xorsum=xorsum^a[i];}cout<<xorsum;


  
    return 0;
}
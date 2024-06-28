#include<iostream>
using namespace std;


void checksort(int arr[],int n){
 int k=arr[0];
    for(int i=0;i<n;i++){
        k =max(arr[i],k);}

int countarr[10]={0};

for(int i=0;i<n;i++)
{ 
countarr[arr[i]]++;
    }
for( int i=1;i<=k;i++){countarr[i]+=countarr[i-1];}
int ansarr[n];
for(int i=n-1;i>=0;i--){ansarr[--countarr[arr[i]]]=arr[i];

}
for(int i=0;i<n;i++)
{  
    arr[i]=ansarr[i];
    }
}

int main(){

int arr[]={6,3,7,4,9,2,1,5};
checksort(arr,8);

for(int i=0;i<8;i++){cout<<arr[i]<<" ";}
return 0;}
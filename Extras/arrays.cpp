#include<iostream>
#include<climits>
using namespace std;

int main()
{int n;
cin>>n;
 int array[n];
 int i,j,k;
 int maxi =INT_MIN;
 int min =INT_MAX;
 for(i=0;i<n;i++){

    cin>>array[i];

 }
 for(i=0;i<n;i++){
    
    if(array[i]<min){min=array[i];}
 } for(j=0;j<n;j++){
    if(array[j]>maxi){maxi=array[j];}
    
 }
cout<<maxi<<"  "<<min;
 
    
    return 0;
}

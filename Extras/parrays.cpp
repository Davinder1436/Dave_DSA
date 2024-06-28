#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
 int array[n];
 int i,j,k;
 int maxi =INT_MIN;
 int min =INT_MAX;
 for(i=0;i<n;i++){

    cin>>array[i];}
for(int k=0;k<n;k++){
    maxi=max(array[k],maxi);
    cout<<maxi<<" ";
}


    return 0;
    }

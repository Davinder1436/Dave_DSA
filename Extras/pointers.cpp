#include<iostream>
using namespace std;
 int main(){int a=10;
// int*aptr=&a;
// *aptr=20;
// cout<<a;
int arr[]={10,20,30,40};
int*ptr=arr;
for(int i=0;i<4;i++){cout<<*(arr+i)<<"   ";}
    
    return 0;}
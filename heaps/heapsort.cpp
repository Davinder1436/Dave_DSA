#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

void heapify(int arr[],int n,int i){
int largest = i;
int left = 2*i;
int right = 2*i+1;

if(left< n && arr[left]>arr[largest])
{largest = left;}
if(right< n && arr[right]>arr[largest])
{largest = right;}
if(largest!=i){
    swap(arr[i],arr[largest]);
    heapify(arr,n,largest);
}

}
void heapsort(int arr[],int size){
    int n=size;
    // heapify(arr,size,1);
    while(n>1){
        swap(arr[n],arr[1]);
        n--;
        heapify(arr,n,1);
    }
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}

int main(){

int arr[]={-1,34,67,22,44,53,12};
int n=6;
for(int i=n/2;i>0;i--){
    heapify(arr,n,i);
}
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
heapsort(arr,6);

priority_queue<int,vector<int>> pq;
pq.push(23);
pq.push(44);
pq.push(53);
pq.push(28);
pq.push(43);

while(!pq.empty()){cout<<pq.top()<<" ";
pq.pop();

}
cout<<endl;
priority_queue<int,vector<int>,greater<int>> pqm;
pqm.push(23);
pqm.push(44);
pqm.push(53);
pqm.push(28);
pqm.push(43);

while(!pqm.empty()){cout<<pqm.top()<<" ";
pqm.pop();
}

    return 0;
}


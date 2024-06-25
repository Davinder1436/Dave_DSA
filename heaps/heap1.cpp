#include<iostream>
using namespace std;

// ARRAY  IMPLIMENTATION OF HEAP
class heaps{
    public:
    int arr[100];
    int size =0;
    void insert(int val){
        size ++;
        int index = size;
        arr[index]= val;
        while(index>1){
            int parent = index/2;
            if(arr[parent]< arr[index]){
                swap(arr[index],arr[parent]);
                index = parent;
            }
            else{return;}
        }

    }
    void print(){
        for(int i=1;i<=size; i++){
            cout<<arr[i]<<" ";
        }
        cout<< endl;

    }
    void heapdelete(){
        
        if(size==0){
            cout<<"nothing to delete";
            return;
        }
        
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size){
            if(arr[i]<arr[i*2]&&i*2<size){
                swap(arr[i],arr[i*2]);
                i=i*2;
            }
            else if(arr[i]<arr[(i*2)+1]&&(i*2)+1<size){
                swap(arr[i],arr[(i*2)+1]);
                i=(i*2)+1;
            }
            else{return;}

        }
        


    }

};


int main(){
    // HEAPS -> complete binary trees(leaf nodes filled in left to right order) and
    //          and follow heap order
    
    //  left child position = i*2;right child position = i*2+1;
    // leaf node = size/2+1 --> size 
    heaps h;
    h.insert(34);
    h.insert(22);
    h.insert(45);
    h.insert(64);
    h.insert(2);
    h.insert(55);
    h.insert(81);
    
    h.heapdelete();

    h.print();



    return 0;
}
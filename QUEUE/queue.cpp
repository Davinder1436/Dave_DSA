#include<iostream>

using namespace std;
#define n 100
class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
        arr = new int[n];
        front=-1;
        back=-1;
        
    }
    void push(int k){
        if(back==n-1){
            cout<<"queue overloaded";
            return;
        }back++;
        arr[back]=k;
        if (front==-1){
            front++;
        }
    }
    void pop(){
        if(front==-1||front>back){
            cout<<"queue is empty";
            return;
        }
        front++;
    }
    



};

int main(){


    return 0;
}
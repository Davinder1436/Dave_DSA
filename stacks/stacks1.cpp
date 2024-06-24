#include<iostream>
using namespace std;
#define n 100
class stack{
    int* arr;
    int top;
public:
    stack(){
        arr = new int[n];
        top=-1;
    }
void push(int x){
    if(top==n-1){
        cout<<"stack over flowed"<<endl;
        return;
    }
    else{
        top++;
        arr[top]=x;
    }
}

void pop(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
        return;
    }
    top--;   
}
void Top(){
     if(top==-1){
        cout<<"stack is empty"<<endl;
        return;
    }
    cout<<arr[top]<<endl;
}
bool empty(){
    return top==-1;
}
};


int main(){
 stack st;
 for(int i=1;i<=20;i++){
    st.push(i);
 }
 st.pop();
st.Top();

    return 0;
}
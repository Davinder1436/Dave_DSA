#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(int val){
    data=val;
    next=NULL;
}

};
class queue{
    
node* front;
node* back;
public:
queue(){
    front =NULL;
    back=NULL;
}
void push(int x){
    node* n=new node(x);
    if(front==NULL){
        back=n;
        front=n;
    }
    back->next=n;
    back=n;
}
void pop(){
    if(front==NULL){
        cout<<"queue empty";
        return;
    }
    node* todelete=front;
    front = front->next;
    delete todelete;
}
int peek(){
   if(front==NULL){
        cout<<"queue empty";
        return -1;
    }
    return front->data;
    }
bool empty(){
if(front==NULL){
        cout<<"queue empty";
        return true;
    }
    return false;
}
};
int main(){
    queue Q;
    
    Q.push(2);
    Q.push(3);
    Q.push(4);
    cout<<Q.peek();
    Q.pop();
    cout<<Q.peek();
    Q.pop();
    cout<<Q.peek();
    Q.pop();
    return 0;
}
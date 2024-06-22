#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
 node(int val){
    data=val;
    next=NULL;
 }};
 void iat(node* &head,int val){
    node* temp=head;
    node* n = new node(val);
    if(head==NULL){head=n;return;}

    while(temp->next!=NULL){
        temp=temp->next;
        
    }temp->next=n;
    return;
    
 }
 void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        
        cout<<temp->data<<"->";
        temp=temp->next;
    }

 }
// ll2 tasks->array to ll, reverse
void iah(node* &head,int val){
    node*n =new node(val);
    if (head==NULL){
        head=n;
        return;}
    n->next=head;
    head = n;
    return;}
void reverse(node* &head){
node* temp=head;

while(temp->next!=NULL){
   iah(head,temp->next->data); 
     
   temp->next=temp->next->next;
   
    }}
 node* reverse2(node* head){
node* prev=NULL;
node* curr=head;
node* next;
while(curr!=NULL){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
}return prev;

 }
node* reverse3(node* head){
    if(head==NULL||head->next==NULL){return head;}
    
    node* newhead=reverse3(head->next);
    head->next->next=head;
    head->next=NULL;
   
    return newhead;
    
}
node* reverseK(node* &head,int k){
    
    
    node* prevptr=NULL;
    node* currptr=head;
    node* next;
    int count =0;
    while(currptr!=NULL&&count<k){
        next=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=next;
        count++;
    }
    if(next!=NULL)
{head->next = reverseK(next,k);}
    return(prevptr);
   
}





int main(){
    node* head=NULL;
     int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        iat(head,i);
    }
    display(head);
    cout<<endl;
    
    node* newhead=reverseK(head,4);
     display(newhead);



    return 0;
}
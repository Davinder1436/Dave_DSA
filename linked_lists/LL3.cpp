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
 void circlell(node* &head,int val){
    node* temp = head;
    node* start;
    while(temp->next!=NULL){
        if(temp->data=val){
            start=temp;
        }
        temp=temp->next;
    }
    temp->next=start;
 }
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

bool detectcircle(node* head){
    node*slow=head;
    node*fast=head;
    while(fast!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
            
        }


    }  
    return false;

}
void removecircle(node* head){
    node*slow=head;
    node*fast=head;
    while(fast!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            fast=head;
            while(fast->next!=slow->next){
                slow=slow->next;
                fast=fast->next;
            }
                slow->next=NULL;
                return;

            
        }


    }
    return;

}





int main(){
    node* head=NULL;
   
    
    for(int i=1;i<=10;i++){
        iat(head,i);
    }display(head);
    
 
    circlell(head,5);
   if(detectcircle(head)){cout<<"circular ll"<<endl;}
    else{cout<<"not a circular ll"<<endl;}

    removecircle(head);

    if(detectcircle(head)){cout<<"circular ll"<<endl;}
    else{cout<<"not a circular ll"<<endl;}
    

    return 0;
}
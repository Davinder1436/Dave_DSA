#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
}

};
void iat(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    
    node*temp = head;
    while( temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;

}
void iah(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head->prev=n;
    head=n;
    return;

}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    
    return;
}
void deletenode(node* head,int val){
    node* temp=head;
    while(temp->data!=val){
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;

}
int length(node* head){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }return count;

}
node* appendK(node* &head,int k){
    node* temp=head;
    node* tail;
    node*newhead;
    int count=1;
    int l=length(head);
    k=k%l;
    while(temp->next!=NULL){
        if(count==l-k){tail=temp;}
        if(count==l-k+1){newhead=temp;}
         temp=temp->next;
        count++;
       
    }
    tail->next=NULL;
    temp->next=head;
    return newhead;
}

int main(){
    node* head=NULL;
    iat(head,1);
    iat(head,2);
    iat(head,3);
    iat(head,4);
    iah(head,0);
    display(head);
    cout<<endl;
    // deletenode(head,3);
    // display (head);
    node* newhead=appendK(head,2);
    display(newhead);
    return 0;
}

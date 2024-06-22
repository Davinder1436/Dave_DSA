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

}
int length(node* head){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }return count;

}
 void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        
        cout<<temp->data<<"->";
        temp=temp->next;
    }}
node* evenafterodd(node* head){
node* odd=head;
node* even=head->next;
node* fixed=even;
while(odd->next!=NULL||even!=NULL){
    odd->next=even->next;
    odd=odd->next;
    even->next=odd->next;
even=even->next;
}
odd->next=fixed;
return head;
}



// void merge(node* &head1 ,node* &head2 ){
// node* ptr1;
// node* ptr2;
// node* head;
// node* ptr3;
// if(head1->data>head2->data){
//     head = head2;
//     ptr1=head2;
//     ptr2=head1;
//     ptr3=ptr1->next;
// }
// else{head=head1;
// ptr1=head1;
// ptr2=head2;
// ptr3=ptr1->next;}
// while(ptr2!=NULL||ptr3!=NULL){
// if(ptr3->data>ptr2->data){
//     ptr1->next=ptr2;
//     ptr1=ptr1->next;
//     ptr2=ptr2->next;
// }
// else{
// ptr1->next=ptr3;
//     ptr1=ptr1->next;
//     ptr3=ptr3->next;

// }
// }
// while(ptr3!=NULL){
//     ptr1->next=ptr3;
//     ptr1=ptr1->next;
//     ptr3=ptr3->next;
// }
// while(ptr2!=NULL)
//   {ptr1->next=ptr2;
//     ptr1=ptr1->next;
//     ptr2=ptr2->next;}
//     display(head);
//     return;
// }




int main(){
   
     node* head =NULL;
    int n;
    cin>>n;
    for(int i=1;i<=n;i+=2){
        iat(head,i);
    }
   node* head2=NULL;
    for(int i=0;i<=n;i+=2){
        iat(head2,i);
    }
    display(head);
    
    cout<<endl;
    // display(head2);
    // cout<<endl;
    // merge(head,head2);
    node* newhead=evenafterodd(head);
    display(newhead);
    return 0;
}


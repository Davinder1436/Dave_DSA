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
void iah(node* &head,int val){
    node*n =new node(val);
    if (head==NULL){
        head=n;
        return;}
    n->next=head;
    head = n;
    return;

}
bool search(node* head,int val){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            
            return true;
        }
        temp=temp->next;
        

    }return false;

}
void deleteathead(node* &head){
node* temp=head;

head=head->next;
delete temp;

}





void deletion(node* &head,int val){
    
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node*todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}


 void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        
        cout<<temp->data<<"->";
        temp=temp->next;
    }

 }


int main(){

   
   
    
     node* head =NULL;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        iat(head,i);
    }
    iah(head,4);
    display(head);
    cout<<endl;
    deletion(head,5);
    deleteathead(head);
    display(head);

    // cout<<endl<<search(head,3);


    return 0;
}
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
void intersection(node* head,node* head2,int k){
node* temp1=head;
node* temp2=head2;
int count=1;
while(count<k){
    temp1=temp1->next;
    count++;
}while(temp2->next!=NULL){
    temp2=temp2->next;

}
temp2->next=temp1;

}
int check(node* head1,node* head2){//check intersection
node* temp1=head1;
node*temp2=head2;
int k=length(head1)-length(head2);
int count =1;
while(count<=k){
    temp1=temp1->next;
    count++;
}
while(temp1!=NULL&&temp2!=NULL){
    if(temp1==temp2){
        return count;
        break;
    }
    temp1=temp1->next;
    temp2=temp2->next;
    count++;
}
return -1;
}

int main(){
   
     node* head =NULL;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        iat(head,i);
    }
    node* head2=NULL;
    iat(head2,1);
    iat(head2,2);
    iat(head2,3);
intersection(head,head2,5);
display(head);
cout<<endl;
display(head2);
cout<<endl;
node* head3=NULL;
for(int i=1;i<=10;i++){
    iat(head3,i);
}

cout<<check(head,head2);
    return 0;
}
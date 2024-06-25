#include<iostream>
#include<queue>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;

node(int val){
    data = val;
    left = NULL;
    right = NULL;
}
};
node* AtoBST(int arr[],int st,int end){
    int mid = (st+end)/2;
    
    node* root = new node(arr[mid]);
    if(st>end){
        return NULL;
    }
    root->left= AtoBST(arr,st,mid-1);
    root->right= AtoBST(arr,mid+1,end);
    return root;
}
void preorder(struct node* &root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void LOT(node* root){
    queue <node*> Q;
    
    Q.push(root);
    Q.push(NULL);
    while(!Q.empty()){
        node* curr =Q.front();
        if(Q.size()==1){
            break;
        }
        else if(Q.front()==NULL){
            cout<<endl;
            Q.pop();
            Q.push(NULL); 
            
        }
        else{
            if(curr->left!=NULL){Q.push(curr->left);}
            if(curr->right!=NULL){Q.push(curr->right);}
            cout<<curr->data<<" ";
            Q.pop();
        }
    }

}
int main(){
int arr[] ={4,5,7,8,9,12,15,20};
node* root =AtoBST(arr,0,7);
preorder(root);
    return 0;
}
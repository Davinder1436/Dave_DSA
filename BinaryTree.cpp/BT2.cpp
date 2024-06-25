// TREE FROM PREORDER  AND INORDER
#include<iostream>
using namespace std;

struct node{
    int data;
    node* right;
    node* left;
    node(int val){
        data=val;
        left=NULL;
        right =NULL;
    }
};
int search(int inorder[],int start,int end,int curr){

for(int i=start;i<=end;i++){
    if(inorder[i]==curr){
        return i;
    }
    
}
return false;
}
node* buildtree(int preorder[],int inorder[],int start,int end){
    static int idx =0;
    int curr = preorder[idx];
    idx++;
    node* newnode = new node(curr);
    if(start==end){return newnode;}

    int pos =search(inorder,start,end,curr);
    newnode->left=buildtree(preorder,inorder,start,pos-1);
    newnode->right=buildtree(preorder,inorder,pos+1,end);
    return newnode;
}

void postorder(struct node* &root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);Ṇ
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
int preorder[7]={1,2,4,5,3,6,7};
int inorder[7]={4,2,5,1,6,3,7};
node* newnode = buildtree(preorder,inorder,0,6);
postorder(newnode);
return 0;
}

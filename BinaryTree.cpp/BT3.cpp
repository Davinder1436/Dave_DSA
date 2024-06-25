// TREE FROM  POSTORDER AND INORDER
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
    }}}

node* BTpostandin(int postorder[],int inorder[],int end,int start){
    static int idx=end;
    int curr =postorder[idx];
    idx--;
    node* newnode = new node(curr);
    if(end==start){return newnode;}
    int pos= search(inorder,start,end,curr);
    newnode->right=BTpostandin(postorder,inorder,end,pos+1);
    newnode->left=BTpostandin(postorder,inorder,pos-1,start);
    return newnode;

}
void preorder(struct node* &root){
    if(root==NULL){
        return ;}
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
int postorder[7]={4,5,2,6,7,3,1};
int inorder[7]={4,2,5,1,6,3,7};
node* newnode = BTpostandin(postorder,inorder,6,0);
preorder(newnode);
return 0;
   
}



#include<iostream>
#include<queue>
using namespace std;
struct node{
int data;
struct node* left;
struct node* right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
 void sumreplace(node* &root){
    if(root==NULL){
        return;
    }
    sumreplace(root->left);
    sumreplace(root->right);
    if(root->left!=NULL){root->data=root->data+root->left->data;}
    if(root->right!=NULL){root->data=root->data+root->right->data;}
}
void preorder(struct node* &root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int hieght(node* root){
if(root==NULL){
    return 0;
}
return max(hieght(root->left),hieght(root->right))+1;
}
bool balancedtree(node* root){
    if(root==NULL){
        return true;
    };
    int lh=hieght(root->left);
    int rh =hieght(root->right);
    if(balancedtree(root->left)==true and balancedtree(root->right)==true){
        if(lh-rh>1 or rh-lh>1){
        return false;
    }
    else {return true;}}
    else {return false;}
}

int main(){
    node* root =new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
root->left->left->left=new node(8);
// sumreplace(root);
// preorder(root);
//     return 0;
cout<<balancedtree(root);
}
#include<iostream>
#include<climits>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
node(int val){
    data = val;
    left = NULL;
    right=NULL;
}
};
struct info{
    int size;
    int min;
    int max;
    int ans;
    bool isbst;
};
info largest_bst(node* root){
    if(root==NULL){
        return{0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left==NULL and root->right==NULL){
        return{1,root->data,root->data,1,true};
    }
    info left = largest_bst(root->left);
    info right = largest_bst(root->right);

info curr;
curr.size =(left.size+right.size+1);
if(left.isbst&&right.isbst&&root->data>left.max&&root->data<right.min){
    curr.isbst =true;
    curr.min =min(left.min,min(right.min,root->data));
    curr.max =max(left.max,max(right.max,root->data));
    curr.ans = curr.size;
    curr.isbst=true;
    return curr;}
    curr.ans = max(left.ans,right.ans);
    curr.isbst = false;
    return curr;
}

int main(){
    struct node* root = new node(9);
    root->left=new node(7);
    root->right=new node(11);
    root->left->left=new node(4);
    root->left->right=new node(8);
    root->right->left=new node(10);
    root->right->right=new node(12);
    root->left->left->left=new node(3);
    root->left->left->right=new node(5);
    cout<<largest_bst(root).ans;
    return 0;
}

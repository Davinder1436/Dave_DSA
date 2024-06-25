#include<iostream>
using namespace std;
 struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data = val;
        left=NULL;
        right = NULL;
    }
};


bool check_same(node* root1,node* root2){
if(root1==NULL and root2==NULL){
    return true;
}
else if(root1==NULL or root2==NULL){
    return false;
}

if(root1->data==root2->data){
    if(check_same(root1->left,root2->left)&&check_same(root1->right,root2->right)){
        return true;
    }
}
else{return false;}

}

int main(){
    struct node* root = new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);

struct node* root2 = new node(1);
root2->left=new node(2);
root2->right=new node(3);
root2->left->left=new node(4);
root2->left->right=new node(5);
root2->right->left=new node(6);
// root2->right->right=new node(8);
cout<<check_same(root,root2);
    return 0;
}
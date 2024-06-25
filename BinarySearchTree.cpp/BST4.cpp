#include<iostream>
#include<queue>
#include<vector>
#include<stack>
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
vector<node*> zigzag(node* root){
    vector<node*> ans;
    stack<node*> curr;
    stack<node*> next;
    node* current;
   
    curr.push(root);
    bool ltr = true;
    while(!curr.empty()){
        
        current = curr.top();
        curr.pop();
        if(current){ans.push_back(current);}
        if(ltr){if(current->left){next.push(current->left);}
                if(current->right){next.push(current->right);}}
        if(!ltr){if(current->right){next.push(current->right);}
                if(current->left){next.push(current->left);}

        }}
        if(curr.empty()){ ltr = !ltr;
            stack<node*> temp =curr;
                curr= next;
                    next= curr;}
        
    
    return ans;

}

// void zigzagLR(node* root){ 
//     if(root->left==NULL && root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     if(root->left!=NULL&&root->left->right!=NULL){
//         cout<<root->left->data<<" ";
        
//         zigzagLR(root->left->right);
//     }
//     if(root->left!=NULL&&root->left->right==NULL){
//         cout<<root->left->data<<" ";
//     }  
// }

int main(){
struct node* root = new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
 root->right->left->right=new node(8); 

vector<node*>v =zigzag(root);
for(int i=0;i<v.size();i++){
    cout<<v[i]->data<<" ";
}

    return 0;
}
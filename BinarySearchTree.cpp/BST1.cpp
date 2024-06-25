#include<iostream>
#include<queue>
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
node* bst(node* root,int val){
  if(root==NULL){
    
    return new node(val);
  }
  if(val < root->data){
    root->left = bst(root->left,val);
  }
  else{
    root->right=bst(root->right,val);
  }
  return root;
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
node* search(node* root,int val){
    if(root==NULL){return root;}
    if(root->data==val){
        return root;
    }
    
    if(val<root->data){return search(root->left,val);}
    else{return search(root->right,val);}
    
}
node* inordersucc(node* root){
    node* curr=root;
    while(curr!=NULL&&curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}

node* deleteBST(node* root,int key){

    if(key<root->data){
        root->left=deleteBST(root->left,key);
    }
    else if(key>root->data){
        root->right = deleteBST(root->right,key);
    }
    else{
            if(root->left==NULL){
                node* temp=root->right;
                free(root);
                return temp;
            }
            else if(root->right==NULL){
                node* temp=root->left;
                free(root);
                return temp;
            }
            
                node* temp = inordersucc( root->right);
                root->data=temp->data;
                root->right=deleteBST(root->right,temp->data);

    }return root;

}

int main(){

node* root=NULL;
root=bst(root,5);
bst(root,8);
bst(root,3);
bst(root,4);
bst(root,9);

// LOT(root);
// cout<<endl;
// if(search(root,9)==NULL){cout<<"not found";}
// else{cout<<search(root,9)->data;}
node* root2=deleteBST(root,5);
LOT(root2);
    return 0;
};
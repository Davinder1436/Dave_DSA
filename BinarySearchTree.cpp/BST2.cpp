#include<iostream>
#include<queue>
#include<climits>
#include<vector>
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
node* createbst(int arr[],int* idx,int key,int min,int max,int n){
     if(*idx>=n){
        return NULL;
    }
    node* root=NULL;

    if(key>min&&key<max){
        root=new node(key);
        *idx = *idx + 1; 
        if(*idx < n){
            root->left = createbst(arr,idx,arr[*idx],min,key,n);
        }
        if(*idx<n){
            root->right = createbst(arr,idx,arr[*idx],key,max,n);
        }
    }
   
    return root;
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int maxL(node* root,int maxl){
    if(root==NULL){
        return maxl;
    }
    maxl= max(maxl,root->data);
    maxL(root->left,maxl);
    maxL(root->right,maxl);
    
}
int minR(node* root,int minr){
    if(root==NULL){
        return minr;}
    
    minr= min(minr,root->data);
    
    minR(root->right,minr);
    minR(root->left,minr);
    }

bool checkbst(node* root,int min,int max){
    if(root==NULL){
    return true;
    }
    
    
    if(root->data>max||root->data<min){
        return false;
    }
    bool leftvalid=checkbst(root->left,min,root->data);
    bool rightvalid=checkbst(root->right,root->data,max);
    return leftvalid && rightvalid;
}



int main(){
int arr[]={10,2,1,13,11};
int n=5;
int idx =0;
    node* root2 =new node(5);
root2->left=new node(4);
root2->right=new node(6);
root2->left->left=new node(3);
root2->left->right=new node(2);
root2->right->left=new node(4);
root2->right->right=new node(7);
root2->left->left->left=new node(8);
node* root=createbst(arr,&idx,arr[0],INT_MIN,INT_MAX,n);
// LOT(root);
cout<< checkbst(root,minR(root,INT_MAX),maxL(root,INT_MIN));
}
// distance between two nodes,flattening BT
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data = val;
        left=NULL;
        right =NULL;
    }
};
node* lca(node* root,int n1,int n2){
    if(root==NULL){return NULL;}
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node* left =lca(root->left,n1,n2);
    node* right =lca(root->right,n1,n2);
    if(left!=NULL&&right!=NULL){
        return root;
    }
    if(left==NULL&&right==NULL){
        return NULL;
    }
    if(left!=NULL){
        return lca(root->left,n1,n2);
    }
    return lca(root->right,n1,n2);
}
int finddistance(node* root,int k,int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dist;
    }
    int left=finddistance(root->left,k,dist+1);
    if(left!=-1){return left;}
    return finddistance(root->right,k,dist+1);
}
int distance(node* root,int n1,int n2){
    node* LCA =lca(root,n1,n2);
    int d1 = finddistance(LCA,n1,0);
    int d2=finddistance(LCA,n2,0);
    return d1+d2;
}
void flat(node* root){
    node* lefttail;
    if(root==NULL||root->left==NULL||root->right==NULL){return;}
    
if(root->left!=NULL){flat(root->left);

node* temp=root->right;
root->right=root->left;
root->left=NULL;

node* t=root->right;
while(t->right!=NULL){
    t=t->right;
    
}t->right=temp;}
flat(root->right);

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
void subtreeK(node* curr,int k){
  if(curr==NULL)  {return ;}
if(k==0){cout<<curr->data<<" ";}
  subtreeK(curr->left,k-1);
  subtreeK(curr->right,k-1);
}

void nodeatK(node* root,node* curr,int k,vector<node*> &ans){
    

}
int main(){
        node* root =new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
root->right->left->left=new node(8);
vector<node*>v;


    return 0;
}
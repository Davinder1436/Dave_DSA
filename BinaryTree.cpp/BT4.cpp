//LEVEL ORDER TREVERSAL 
#include<iostream>
#include<queue>
using namespace std;
struct node{
int data;
struct node* left;
struct node* right;
    node(int val){ 
        data= val;
        left =NULL;
        right=NULL;
    
    }
};
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
int sumofLVL_K(node* root,int k){
    queue <node*> Q;
    int count=0;
    int ans=0;
    Q.push(root);
    Q.push(NULL);
    while(!Q.empty()){
        node* curr =Q.front();
        if(root==NULL){
            break;
        }
        else if(Q.front()==NULL){
            count++;
            Q.pop();
            Q.push(NULL); 
            
        }
        else if(count==k){
            while(Q.front()!=NULL){
                ans+=Q.front()->data;
                Q.pop();
            }
            return ans;
        }
        else{
            if(curr->left!=NULL){Q.push(curr->left);}
            if(curr->right!=NULL){Q.push(curr->right);}
            
            Q.pop();
        }
    }

}

int countnodes(node* root){
   if(root==NULL){
    return 0;
   }
   return countnodes(root->left)+countnodes(root->right)+1;
   
}
int sumnodes(node* root){
    if(root==NULL){
    return 0;
    }
    int ans=root->data;
    return ans+ sumnodes(root->left)+sumnodes(root->right);
}
int hieght(node* root){
if(root==NULL){
    return 0;
}
return max(hieght(root->left),hieght(root->right))+1;
}

int diameter(node* root){
    if(root==NULL){
    return 0;
}
int currdiameter = hieght(root->left)+hieght(root->right)+1;

int leftdiameter= diameter(root->left);
int rightdiameter= diameter(root->right);;
return max(currdiameter,max(leftdiameter,rightdiameter));
}

int main(){
struct node* root = new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
 root->right->left->right=new node(8); 
// cout<<sumofLVL_K(root,2);
// LOT(root);
// cout<<endl;
cout<<sumofLVL_K(root,2);
    return 0;
}
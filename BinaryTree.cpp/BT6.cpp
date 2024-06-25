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
}};
void rightview(node* root){
queue <node*> Q;
Q.push(root);
Q.push(NULL);
vector <node*> v;
while(!Q.empty()){
    if(Q.size()==1){
       break;  
    }   
    else if(Q.front()==NULL){
        cout<<endl;
        Q.push(NULL);
        
    }
    else{

        if(Q.front()->left!=NULL){Q.push(Q.front()->left);}
            if(Q.front()->right!=NULL){Q.push(Q.front()->right);}
            
           
    }v.push_back(Q.front());
    Q.pop();   

}
 for(int i=0;i<=v.size();i++){
if(i==(v.size()-1)){cout<<v[i]->data;}
        if(v[i]==NULL){cout<<v[i-1]->data;}
    }
}
void leftview(node* root){
queue <node*> Q;
Q.push(root);
Q.push(NULL);
vector <node*> v;
while(!Q.empty()){
    if(Q.size()==1){
       break;  
    }   
    else if(Q.front()==NULL){
        cout<<endl;
        Q.push(NULL);
        
    }
    else{

        if(Q.front()->left!=NULL){Q.push(Q.front()->left);}
            if(Q.front()->right!=NULL){Q.push(Q.front()->right);}
            
           
    }v.push_back(Q.front());
    Q.pop();   

}cout<<root->data;
 for(int i=0;i<=v.size();i++){

        if(v[i]==NULL){cout<<v[i+1]->data;}
    }
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

leftview(root);
    return 0;
}
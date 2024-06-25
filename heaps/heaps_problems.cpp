#include<iostream>
#include<queue>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
#define pii pair<int,int>
#define vii vector<pii>
#define loop(i,a,b) for(int i =a;i<b;i++)
#define maxQ priority_queue<int,vector<int>>
#define minQ priority_queue<int,vector<int>,greater<int>>
priority_queue<int,vector<int>,greater<int>>minq;
priority_queue<int,vector<int>>maxq;

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

int Kth_smallest(int arr[],int n,int k){
    loop(i,0,k){
        maxq.push(arr[i]);
    }
    loop(i,k,n){
        if(arr[i]<maxq.top()){
            maxq.pop();
            maxq.push(arr[i]);
        }
    }
    return maxq.top();


}

int min_size_subsequence_for_sum_k(int arr[],int n,int k){
    maxQ subseq;
    loop(i,0,n){
        subseq.push(arr[i]);
    }
    int count =0;
    int sum=0;
    while(!subseq.empty()){
        sum+=subseq.top();
        subseq.pop();
        count++;
        if(sum>k){
            break;
        }
    }
    if(sum<k){return -1;}


    return count;
}
bool is_cbt(node* root,int n,int idx){
    if(root==NULL||(root->left==NULL&&root->right==NULL)){
        return true;
    }
    int maxidx = 0;
    if(is_cbt(root->left,n,idx+1) && is_cbt(root->right,n,idx+2)){
        maxidx = max(maxidx,idx);
        if(root->left==NULL && root->right!=NULL){
            return false;
        }
        else {return true;}
    }
    if(maxidx==n){
        return true;
    }
    return false;

}
bool is_maxheap(node* root){
    if(root->left==NULL&&root->right==NULL){
        return true;
    }
    if(root->right==NULL){
        return root->left->data<root->data;
    }
    else{
        bool left = is_maxheap(root->left);
        bool right = is_maxheap(root->right);
        if(left && right){
            return(root->left->data<root->data)&&(root->right->data<root->data);
        }
        return false;
    }
    
    
}
bool is_bt_a_heap(node* root,int n){
    if(is_cbt(root,n,1) && is_maxheap(root)){//cbt -> complete binary tree
        return true;
    }
    return false;
}

void smallest_range_in_k_lists(vector<vector<int>>V,int k){// all lists are sorted;
minQ mq;
int maxi = INT_MIN;
loop(i,0,k){
maxi = max(maxi,V[i][0]);
mq.push(V[i][0]);
}
cout<<"range: {"<<mq.top()<<","<<maxi<<"}";

}

int main(){

    struct node* root = new node(9);
    root->left=new node(8);
    root->right=new node(7);
    root->left->left=new node(6);
    root->left->right=new node(5);
    root->right->left=new node(4);
    root->right->right=new node(3);
    root->left->left->left=new node(3); 


    // cout<<is_bt_a_heap(root,8);


    vector<vector<int>> V ;
    vector<int>V1;
    loop(i,4,12){
        V1.push_back(i);
    }
    
    vector<int>V2;
    loop(i,8,12){
        V2.push_back(i);
    }
    vector<int>V3;
    loop(i,11,18){
        V2.push_back(i);
    }
    V.push_back(V1);
    V.push_back(V2);
    V.push_back(V3);

    smallest_range_in_k_lists(V,3);

    // int arr[]={3,7,5,9,2};
    // cout<<min_size_subsequence_for_sum_k(arr,5,20);

    return 0;
}
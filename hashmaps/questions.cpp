#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
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

unordered_map<int,int> vo;

void mark(node* root,int i){
    if(root == NULL ){
        return;
    }
    mark(root->left,i-1);

pair<int,int> p(root->data,i);
    vo.insert(p);
    
    mark(root->right,i+1);


}

void vertical_order(node* root){
    if(root==NULL){return;}
    
    mark(root,0);
    for(auto i:vo){
        {cout<<i.first<<" ";}
    }cout<<endl;
}
void no_of_subarrays_ofsum0(int arr[],int n){
    map<int,int> count;
    int prefixsum=0;
    for(int i=0;i<n;i++){
        prefixsum += arr[i];
        count[prefixsum]++ ;
    }
    int ans = 0;
    map<int,int> :: iterator it;
    for(it = count.begin();it!=count.end();it++){
        int c = it->second;
        ans+=(c*(c-1))/2;
    
   
    if(it->first== 0){
        ans+=it->second;
    }}
    cout<<ans;

}
void top_k_most_frequent_elements(int arr[],int n,int k){

    map<int,int> freq;
    int count=0;
    for(int i=0;i<n;i++){
        if(count<=k){
            count++;
            freq[arr[i]]++;
        }
        else{
            if(freq[arr[i]]>0){
                freq.at(arr[i])++;
            }
        }
    }
    // sort(freq.begin(),freq.end(),greater<pair<int,int>>());
    map<int,int> :: iterator it;
    for(it=freq.begin();it!=freq.end();it++){
        if(it->second!=0){cout<<it->first<<" : "<<it->second<<endl;}
    }


}

int main(){
    node* root2 =new node(5);
root2->left=new node(4);
root2->right=new node(6);
root2->left->left=new node(3);
root2->left->right=new node(2);
root2->right->left=new node(4);
root2->right->right=new node(7);
root2->left->left->left=new node(8);

// vertical_order(root2);

int arr[]={1,1,2,4,2,5,4,2,6};
// no_of_subarrays_ofsum0(arr,4);
top_k_most_frequent_elements(arr,9,3);


    return 0;
}
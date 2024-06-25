// 1,1,2,5,14....
// C0 =1  C1 =1
//C2 = C0*C1+C1*C0=2
//C3= C0*C3 + C1*C2 + C2*C1 + C3*C0 = 5
//Cn = C0*Cn-1......Cn-1*C0
#include<iostream>
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

int catalan( int n)
{   if(n<=1){
    return 1;
}
    int res=0;
    for(int i =0;i<=n-1;i++){
        res+=catalan(i)*catalan(n-i-1);
    }return res;

}

vector<node*> allbst(int st,int end){
    vector<node*> trees;
    if( st>end){
        trees.push_back(NULL);
        return trees;
    }
    
    for(int i=st;i<=end;i++){
        vector<node*> leftttree=allbst(st,i-1);
        vector<node*> rightttree=allbst(i+1,end);

        for(int j = 0;j<leftttree.size();j++){
            node* left = leftttree[j];
            for(int k=0;k<rightttree.size();k++){
                node* right =rightttree[k];
                node* Node = new node(i);
                Node->left = left;
                Node->right = right;
                trees.push_back(Node);
            }
        }

    }return trees;


}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

int main(){
vector<node*> V = allbst(1,3);
for(int i=0;i<V.size();i++){
    preorder(V[i]);
    cout<<endl;

}

    return 0;
}
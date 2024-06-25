#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
priority_queue<int,vector<int>,greater<int>> pqmin;
priority_queue<int, vector<int>>pqmax;
void insert(int x)
{
    if(pqmin.size()==pqmax.size()){
        if(pqmax.size()==0){
            pqmax.push(x);
            return;
        }
        if(x<pqmax.top()){
            pqmax.push(x);
            
        }
        else{pqmin.push(x);}
        return;
    }
    else{
        if(pqmax.size()>pqmin.size()){
            if(x>=pqmax.top()){
                pqmin.push(x);
                return;
            }
            else{
                int temp = pqmax.top();
                pqmax.pop();
                pqmax.push(x);
                pqmin.push(temp);
            }
        }
        else{
            if(x<=pqmin.top()){
                pqmax.push(x);
                return;
            }
            else{
                int temp = pqmin.top();
                pqmin.pop();
                pqmin.push(x);
                pqmax.push(temp);
            }
            
        }
    }
}
int findmedian(){
if(pqmax.size()==pqmin.size()){
    if(pqmax.size()==0){
        
        return -1;
    }
    return (pqmax.top() + pqmin.top())/2;
    
}
else if(pqmax.size()>pqmin.size()){
    return pqmax.top();
}
else{
    return pqmin.top();
}

}


int main(){

for(int i=0;i<10;i++){
    int n;
    cin>>n;
    insert(n);

    cout<<"median :"<<findmedian()<<endl;
    
}
    
    return 0;

}

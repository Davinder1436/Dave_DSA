#include<iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int> stockspan(vector<int> &v){
int n=v.size();
stack<int> st;
vector<int> output(n,1);
int count=1;
st.push(0);
for(int i=1;i<n;i++){
    if(v[i]>= v[st.top()]){
        count++;
        st.push(i);
        output[i]=count;
    }
    else{
        count = 1;
        output[i]=1;
    }
    
}
return output;

}


int main(){
vector<int> input={3,4,2,5,6,7,7,5,3};
vector <int> output = stockspan(input);
int n = output.size();
for(int i=0;i<n;i++){
    cout<<output[i]<<" ";
}

    return 0;
}
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector <int> ngi(vector<int> &arr){
    stack<int> st;
    int n= arr.size();
    vector <int> output(n,-1);
    st.push(0);
    for(int i=1;i<n;i++){
    
        while(!st.empty() and arr[i]>arr[st.top()]){
            output[st.top()]=arr[i];
            st.pop();
        }st.push(i);
    }
    while(!st.empty()){
        output[st.top()]=-1;
        st.pop();
    }
    return output;
}


int main(){
vector <int> arr={3,2,1,5,4,7,3,7,2,1};
vector <int> output = ngi(arr);
int n = output.size();
for(int i=0;i<n;i++){
    cout<<output[i]<<" ";
}
    return 0;
}

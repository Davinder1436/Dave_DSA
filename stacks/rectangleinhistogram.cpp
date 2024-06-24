#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int histogram(vector <int> v){
int maxi =0;
stack<int> st;
int n = v.size();
for(int i=1;i<n;i++){


    int count =1;
    while(!st.empty() and v[i]<v[st.top()]){
        if(v[st.top()]<v[i]){
            maxi = max(maxi,count*v[i]);
        }
        maxi = max(maxi,count*v[st.top()]);
        st.pop();
        count++;
    }
st.push(i);

}
return maxi;
}

int main(){
vector<int> arr ={2,3,5,3,4,6};
cout<<histogram(arr);

    return 0;
}
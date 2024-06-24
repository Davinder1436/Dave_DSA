#include<iostream>
#include<string>
#include<stack>
using namespace std;

void reverse(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' '&& i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while(st.empty()==false)
    {cout<<st.top()<<" ";
    st.pop();}
}
void insertatbottom(stack<int> &S,int k){
     if(S.empty()){
        S.push(k);
        return;}
int helping;
helping=S.top();
S.pop();
insertatbottom(S,k);
S.push(helping);

}
void stackreverse(stack<int> &S){
    if(S.empty()){return;}
    int ele=S.top();
    S.pop();
    stackreverse(S);
    insertatbottom(S,ele);

}


int main(){
// string s="hey bruh what's going";
// reverse(s);
//     return 0;
 stack<int> S;
 for(int i=1;i<=20;i++){
    S.push(i);
 }
stackreverse(S);
while(S.empty()==false){
    cout<<S.top()<<" ";
   S.pop();
}
}
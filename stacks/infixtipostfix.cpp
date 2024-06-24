#include<iostream>
#include<stack>
#include<string>
#include<math.h>

using namespace std;
int precedence(char a){
    if(a =='^'){
        return 3;
    }
    else if(a=='*'||a=='/'){
        return 2;
    }
    else if(a=='+'||a=='-'){
        return 1;
    }
    else{return -1;}

}

int topostfix(string s){
    stack <char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z'){
            cout<<s[i];
        }
        else{
        
        int pnow=precedence(s[i]);

        if(s[i]==')'){
            while(st.top()!='('&&!st.empty()){
                cout<<st.top();
                st.pop();
            }
            st.pop();
        }
        else if(s[i]=='('){
            st.push(s[i]);

        }
        else if(pnow<precedence(st.top())&&!st.empty()){
            while(pnow>precedence(st.top())&&!st.empty()){
                cout<<st.top();
                st.pop();
            }
        }
        else if(st.empty()){st.push(s[i]);}}}
        
    

}







int main(){
topostfix("a*(b+c/d)");

    return 0;
}
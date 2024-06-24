#include<iostream>
#include<stack>
using namespace std;

bool balanced(string s)
{
    stack<char> st;
    for (int i=0;i<s.size();i++)
    {if(s[i]=='{' or s[i]=='[' or s[i]=='('){
        st.push(s[i]);
    }
    else if (s[i]==']'){
            if(st.top()=='['){st.pop();}
            else{st.push(s[i]);}
    }
      else if (s[i]==')'){
            if(st.top()=='('){st.pop();}
            else{st.push(s[i]);}
    }
      else if (s[i]=='}'){
            if(st.top()=='{'){st.pop();}
            else{st.push(s[i]);}
    }
    }
    if(st.empty()){
        return true;
    }
    else{return false;}

}

int main(){

cout<<balanced("{[{)]}");
    return 0;
} 
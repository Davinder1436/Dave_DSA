#include<iostream>
#include<string>
using namespace std;


 int mazepath(int n,int i,int j){
    if(j>n||i>n){return 0;}
    if(j==n-1||i==n-1){return 1;}
    else{ return mazepath(n,i+1,j)+(mazepath(n,i,j+1));}


 }



void permutation(string s,string ans){
    if(s.length()==0){cout<<ans<<endl;return;}
    for(int i=0;i<s.length();i++){
        char ch =s[i];
        string remain =s.substr(0,i)+ s.substr(i+1);
        permutation( remain,ans+ch);
    }
}




int countpath(int n,int i,int j){
if(i==n-1&&j==n-1){return 1;}
if (i>n||j>n){return 0;}
return countpath(n,i+1,j)+countpath(n,i,j+1);

}










void pp(string s,string ans){
    if(s.length()==0){cout<<ans<<" ";return;}
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string remain =s.substr(0,i)+s.substr(i+1);
        pp(remain,ans+ch);
    }



}
    

void substring( string s, string ans){
    if(s.length()==0){cout<<ans<<" ";return;}
    char ch = s[0];
    int as = ch;
    string remain=s.substr(1);
    substring(remain,ans);
    substring(remain,ans+ch);
    substring(remain,ans+ to_string(as));


}

void reverse(string s){
    if(s.length()==0){return;}
    
    string a = s.substr(1);
    reverse(a);
    cout<<s[0];

}
string movex(string s)
    {  if(s.length()==0){return s;}
        char ch=s[0];
        string remain=movex(s.substr(1));
        if(ch!='x'){return ch+remain;}
        else{ return remain+ch;}

    }


string rad2(string s){
    if(s.length()==0){
        return s;
    }char first= s[0];
    string remain =rad2(s.substr(1));
    
    if(first==remain[0]){return remain;}
    else{return first+ remain;}
    
}
void rad(string s){
    if(s.length()==0){return;}

    if(s[0]==s[1]){
        rad(s.substr(1));
    }
    else{cout<<s[0];
    rad(s.substr(1));}
}
 void replacepi(string s){
    if(s.length()==0){return;}
    if(s[0]=='p'&&s[1]=='i' ){
        cout<<"3.14";replacepi(s.substr(2));
    }
    else
    {cout<<s[0];
        replacepi(s.substr(1));}
}
void towerofhanoi(int n, char src,char help,char des){
    if(n==0){return;}
    towerofhanoi(n-1,src,des,help);
    cout<<"move from "<<src<<" to "<<des<<endl;
    towerofhanoi(n-1,help,src,des);
    
}


int main(){
    
    int arr[5][5];
    
    

    return 0;
    
    
}


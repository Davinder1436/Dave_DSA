#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    // string str ="hello world";
    // cout<<str;
    string s1="hello lets have a typing practice.we hope you all enjoy this.now you can start...";
    // cout<<s1<<endl;
    // string s2;
   
    // getline(cin,s2);
   
    // bool y=s1.compare(s2);
    // if(y==0){cout<<"good";}
    // else{cout<<"OOP's try again";}
    
    // s1.erase(10,10);

    // cout<<s1.size();

    // s1.insert(6,"man ");
    // cout<<s1;
    
    // cout<<s1.length();
    // for(int i =0 ;i<s1.length();i++){
    //     if (i%2==0){string a=" ";
    //         if(s1[i]==a[0]){cout<<s1[i];}
    //         else{s1[i]=a[0];cout<<s1[i];}
    //     }
    //     else{cout<<s1[i];}
    // }
    // string s=s1.substr(0,5);
    // cout<<s;

    // string to integer conversion by stoi function
    // string s2="143";
    // int x=stoi(s2);
    // cout<<x+3;

    // iteger to string-->to_string function
    // cout<<to_string(x)+"6";
    
    //sort function-->needs include algorithm
    // string s2="hghninrnilrinv";
    // sort(s1.begin(),s1.end());
    // cout<<s1;
    // for(int i =0;i<s1.size();i++){
    //     if(s1[i]>='a'&&s1[i]<='z'){s1[i]-=32;}

    // }
    // cout<<s1;
    // string s3=".";
    // for(int i =0;i<s1.size();i++){
    //     if(s1[i]>='a'&&s1[i]<='z'&&(s1[i-1]==s3[0]||i==0)){s1[i]-=32;}

    // }
    // cout<<s1;

    //--> maximum ocurring alphabet in a string
    int freq[26];
    for(int i=0;i<26;i++){freq[i]=0;}

    for(int i =0;i<s1.size();i++){
        freq[s1[i]-'a']++;
    }int maxi=0;
    char ans='a';
    for(int i=0;i<26;i++){
        if(freq[i]>maxi){ans=i+'a';}
        maxi=max(freq[i],maxi);}
        cout<<maxi<<" "<<ans;


    



    return 0;
}
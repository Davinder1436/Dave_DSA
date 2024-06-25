#include<iostream> 
#include<set>

using namespace std;



int main(){
    set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(4);
// for(auto i: s){
//     cout<<i<<endl;
// }
// for(auto i=s.begin();i!=s.end();i++){
//     cout<<*i<<" ";
// }
// cout<<endl;
// for(auto i=s.rbegin();i!=s.rend();i++){
//     cout<<*i<<" ";
// }
cout<<*s.lower_bound(1)<<endl;
// LOWER BOUND ->RETURN INPUT IF PRESENT IN SET ELSE RETURN JUD=ST GREATER ELMENT OF IT
cout<<*s.upper_bound(1);
//UPPER BOUND -> GIVE JUST GREATER ELEMENT THAN INPUT
    return 0;
}
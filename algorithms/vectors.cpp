#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v; // we can use v.size() to find its size
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
     v.pop_back();
    vector<int>::iterator it;//'it' is a pointer
    for(it=v.begin();it!=v.end();it++){cout<<*it<<" ";}

    //for(auto element:v){cout<<element;}//element represents the element or value

vector<int>v2(3,50);
swap(v,v2);
for(auto element:v){cout<<element;}
//  pairs are used to sotore diff datatypes at alternate position
 pair<int,char> p;

}
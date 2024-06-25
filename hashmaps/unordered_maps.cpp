#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){

    unordered_map<string,int> m;
// INSERTION [O(1)]
    pair<string,int> p1 = make_pair("how",4);
    m.insert(p1);
    //or
    pair<string,int> p2("are",4);
    m.insert(p2);
// search ->   we can sech any key using corresponding key;
    cout<<m["int"]<<endl; //if not exist than make new element with corresponding value 0;
    cout<<m.at("int")<<endl;//if not exist throw error
//other
cout<<m.size()<<endl;
m.erase("int");
cout<<m.size()<<endl;

// iterators
for(auto i:m){
    cout<<i.first<<" : "<< i.second<<endl;
}

pair<string,int> p3("you",2);
    m.insert(p3);
// pair<string,int> p4("you",3);
//     m.insert(p4);

unordered_map<string,int> :: iterator it = m.begin();

while(it!= m.end()){
    cout<<it->first<<" : "<<it->second<<endl;
    it++;
}


    return 0;

}



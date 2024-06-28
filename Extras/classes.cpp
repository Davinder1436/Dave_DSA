#include<iostream>
#include<string>
using namespace std;

class info{
  
  string name;
  int age;
  bool gender;
  
public:
info(){cout<<"default constructor"<<endl;}

 info(info &a){
    name=a.name;
    age=a.age;
    gender=a.gender;
    

 }
 ~info(){cout<<"element destructed"<<endl;}

void printinfo(){
   cout<<"printing..."<<endl;

    cout<<name<<endl;
    cout<<age<<endl;
    cout<<gender<<endl;}

 info(string s, int i,bool y){
    cout<<"parameterized constructor "<<endl;
    name =s;
    age=i;
    gender=y;
     
 }
bool operator == (info(&a)){
    if(name==a.name&&age==a.age&&gender==a.gender){return true;}else{return false;}
    }
};
class student : public info{};

int main(){

// info arr[1];
// for(int i=0;i<1;i++){
//     cin>>arr[i].name;
//     cin>>arr[i].age;
//     cin>>arr[i].gender;
    
    
//  }
student a;
 a.printinfo();
// info b;

// info c(a);
//  c.printinfo();
//     return 0;
// if(c==a){cout<<"same";}
   
}
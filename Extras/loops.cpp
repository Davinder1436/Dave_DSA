#include<iostream>
using namespace std;
int main(){

    // print all prime numbers between two numbers 
    int num,num2,num3,num4;
    cin>>num4;
    cout<<endl;
    cin>>num;

    for(num2=num4;num2<num;num2++){
    
    for(num3=2;num3<num2;num3++){
        if(num2%num3==0){
        
        break;}
    }
    if(num3==num2){
        cout<<num2<<endl;
        
    }
    
    }

    return 0;
}
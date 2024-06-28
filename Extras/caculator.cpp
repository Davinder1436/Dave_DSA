#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    char func;
    cout<<"enter a number 1 , opretor, number2  :  ";
    cin>>num1>>func>>num2;
    switch (func)
    {
    case '+':
    cout<<num1+num2<<endl;
        break;
    case '-':
    cout<<num1-num2<<endl;
        break;
        case '*':
    cout<<num1*num2<<endl;
        break;
        case '/':
    cout<<num1/num2<<endl;
        break;
    
    default:
        break;
    
    }

    return 0;
}

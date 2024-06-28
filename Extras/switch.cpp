  #include<iostream>
using namespace std;
int main(){
// ap gp and agp calculator
    int a,b,d,r,num1,num2;
    
    char op;
    cout<<"enter starting number :";
    cin>>a;
    cout<<"enter ending number :";
    cin>>a;
    cout<<" if AP then enter +,if GP then * , if AGP then enter #";


    switch(op)
    {
    case '+':
    cin>>d;
    for(num1=a;num1<=b;num1=num1+d){
        cout<<num1<<endl;
        break;

    }
    case '*':
    cin>>r;
    for(num2=a;num2<=b;num2=num2*r)
    cout<<num2<<endl;
        
        break;
    case '#':
    cin>>d>>r;
    for(num1=a;num1*r<=b;num1=num1+d)
    cout<<num1*r<<endl;
        break;
    
    default:
        break;
    }










    return 0;
}
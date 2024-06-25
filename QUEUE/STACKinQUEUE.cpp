#include<iostream>
#include<stack>
using namespace std;
class queue{
    int front;
    int back;
    public:
    stack<int> main;
    stack<int> helper;

    void push(int x){
        main.push(x);
    }

    void popq(){
        while(main.empty()==false){
            int topmain=main.top();
            helper.push(topmain);
            main.pop();
        }
        helper.pop();
        while(helper.empty()==false){
            int tophelper=helper.top();
            main.push(tophelper);
            helper.pop();
        }
    }
    // int popq(){
        
    //     if(main.empty()){
            
    //         return -1;
    //     }
    //     int x=main.top();
    //     main.pop();
    //     int item=popq();
    //     main.push(x);
    //     return item;
    // }
    int top(){
        while(main.empty()==false){
            int topmain=main.top();
            helper.push(topmain);
            main.pop();
        }
        return helper.top();}
    bool empty(){
        return main.empty();
    }
};

int main(){
    queue Q;
    Q.push(1);
     Q.push(2);
      Q.push(3);
       Q.push(4);
    cout<<Q.top()<<endl;
    Q.popq();
     cout<<Q.top()<<endl;
    Q.popq();
     cout<<Q.top()<<endl;
    Q.popq();
     cout<<Q.top()<<endl;
    Q.popq();
    cout<<Q.empty();
    return 0;
}
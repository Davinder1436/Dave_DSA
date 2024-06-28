#include<iostream>
using namespace std;
getbit(int n,int pos){
        return((n |(1<<pos))!=0);}

setbit(int n,int pos){
        return(n |(1<<pos));}

clearbit(int n,int pos){
        return((n &(~(1<<pos))));}
        
updatebit(int n, int pos, int value){
    n =(n&(~(1<<pos)));
    return((n |(value<<pos)));}


int main(){ 
    




    return 0;
}
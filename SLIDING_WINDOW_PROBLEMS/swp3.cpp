#include<iostream>

using namespace std;
bool ispalindrome(int arr[],int st,int end){
while(st<=end){
    
    if(st==end||st>end){return true;}
    if(arr[st]==arr[end]){
        end--;
        st++;
    }else{return false;}
    
}

}

bool subarray_palindrome(int arr[],int n,int k){
int st=0,end=k-1;
for(int i=0;i<n;i++){
st=i;
if(ispalindrome(arr,st,end)){
    return true;
}
end++;
}
return false;

}

int main(){
    int arr[]={2,4,5,3,6,3,5,6,7,2};
    cout<<subarray_palindrome(arr,10,5);
    return 0;
}
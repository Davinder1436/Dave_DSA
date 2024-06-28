 #include<iostream>
using namespace std; 
int reverse(int n){
    int ans=0;
    
    while(n>0){
        int l=n%10;
        ans=ans+l;
        ans = ans*10;

        n=n/10;

    }
    ans=ans/10;
    return ans;
}
int btod(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int l=n%10;
        ans=ans+l*x;
        x*=2;
        n=n/10;
    }
    return ans;

    }
    int otod(int n){
        int ans =0;
        int x=1;
        while(n>0){
            int l=n%10;
            ans=ans+l*x;
            x*=8;
            n=n/10;
        }
        return ans;
    }
    int dtob(int n){
        int ans=0;
        
        while(n>=1){
            int y=n%2;
            n/=2;
            ans=ans+y;
            ans*=10; }
            ans = ans/10;
            return reverse(ans);
            



    }
int addB(int n1,int n2){
    int carry =0;
    int ans=0;
    int l3;
    while(n1>0&&n2>0){
        int l1=n1%10;
        int l2=n2%10;
        if(l1==0&&l2==0){}
        else if(l1==1&&l2==0){
            if(carry==0){l3=1;}
            else if(carry==1){l3=0; } }

         else if(l1==0&&l2==1){
            if(carry==0){l3=1;}
            else if(carry==1){l3=0; } }

        else if(l1==1&&l2==1){
            if(carry==0){l3=0;carry++;}
            else if(carry==1){l3=1; } }
    
            
            



 return l3;}
}
        
        

int main(){
        int n;
        cin>>n;
        int arr a[n];


    



return 0;
}
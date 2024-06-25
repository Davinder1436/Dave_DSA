#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int getmaxarea(vector <int> a){



}

int main(){
int a[]={2,3,5,3,1,6};
int ans =0;
for(int i=0;i<6;i++){
    int minh=a[i];
    for(int j=i;j<6;j++){
        minh =min(minh,a[j]);
        int len =j-i+1;
        ans=max(ans,len*minh);
    }

}cout<<ans;

vector <int> a;

return 0;
}
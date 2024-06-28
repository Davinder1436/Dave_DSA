#include<iostream>
#include<climits>
using namespace std;
int main(){// cumilative sumarray
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    
    //        int sa[n+1];
    //        sa[0]=0;
    //        for(i=1;i<=n;i++){
    //    sa[i] = arr[i-1]+ sa[i-1];}
      
    
    //        int maxsum = INT_MIN;
    //        for(i=1;i<=n;i++){
    //      int sum=0;
    //      for(int j=0;j<n;j++){sum=sa[i]-sa[j];
    //      if(sum>maxsum){maxsum=sum;}}
    //            time compexity n^2 here 
  
    //        }cout<<maxsum;

    // kadanes method optimized method 
    // int currsum=0;
    // int maxsum=INT_MIN;
    
      // for(int i=0;i<n;i++){
        // if(arr[i]>=0){currsum+=arr[i];
        // maxsum=max(maxsum,currsum);}
        // else{currsum=0;}

        //-->circular array max sum
        // max sum of array = total sum of arr - max negative sum subarray
        // to get maximum negaative sum subarray make the sign of array negative and use kadanes method
        for(int i=0;i<n;i++){arr[i]*=-1;}
        int currsum=0;
        int maxsum=INT_MIN;
    
      for(int i=0;i<n;i++){
        if(arr[i]>=0){currsum+=arr[i];
        maxsum=max(maxsum,currsum);}
        else{currsum=0;}
        }
      

        

   
    



      return 0;
} 
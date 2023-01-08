// Sum of prime Digits.
// Time Complexity : O(logN)
// Space Complexity : O(1)



//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int primeSum(int N){
       int i,count=0,rem,sum=0;
       while(N>0){
           rem=N%10;
           if(rem==2 || rem==3 || rem==5 || rem==7){
                sum=sum+rem;
           }
           N=N/10;
       }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends

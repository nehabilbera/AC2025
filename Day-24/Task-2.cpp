Task 2: https://practice.geeksforgeeks.org/.../max-sum-subarray.../1
Time Complexity : O(N)
Space Complexity : O(1)


//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        int i=0,j=0;
        long sum=0,maxsum=0;
        while(j<N){
            sum+=Arr[j];
            if(j-i+1<K){
                j++;
            }
            else{
                maxsum= max(sum,maxsum);
                sum-=Arr[i];
                i++;
                j++;
            }
        }
        return maxsum;
        /*
        sort(Arr.begin(),Arr.end());
        int i,sum=0;
        for( i=K;i<N;i++){
            sum=sum+Arr[i];
        }
        return sum;
        */
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends

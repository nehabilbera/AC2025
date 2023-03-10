//Wave Array
// Time Complexity : O(N)
// Space Complexity : O(1)


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// #include <algorithm>


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        int temp,i,a[1000000]={0};
        for(i=0;i<n-1;i++){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            i++;
            }
        if(n%2 ==1 )
            a[i]=arr[i];
        else
            a[n-1]==arr[n-1];
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        vector<int> a(n); //declare vector of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        Solution ob;
        ob.convertToWave(n, a);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}
// } Driver Code Ends

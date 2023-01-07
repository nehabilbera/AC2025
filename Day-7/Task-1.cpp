//Searching an element in a sorted array

//Time Complexity : O(logN)
//Space Complexity : O(1)

//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
        int i,u,l,m;
        u=0;
        l=N-1;
        m=(u+l)/2;
        while(u<=l){
            if(K==arr[m]){
            return 1;
            break;
            }
            else if(K<arr[m]){
                l=m-1;
                m=(u+l)/2;
            }
            else{
                u=m+1;
                m=(u+l)/2;
            }
            }
            if(u>l)
            return -1;
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends

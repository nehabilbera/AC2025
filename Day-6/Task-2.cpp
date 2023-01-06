//Union of two sorted Array.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> uni;
        int i=0,j=0;
        while(i<n && j<m){
            while(i+1 < n && arr1[i] == arr1[i+1])
            i++;
            while(j+1 < m && arr2[j] == arr2[j+1])
            j++;
            
            if(arr1[i] < arr2[j]){
                uni.push_back(arr1[i++]);
            }
            else if(arr1[i] > arr2[j]){
                uni.push_back(arr2[j++]);
            }
            else{
                uni.push_back(arr1[i++]);
                j++;
            }
        }
        while(i<n){
            while(i+1 < n && arr1[i] == arr1[i+1])
            i++;
            uni.push_back(arr1[i++]);
        }
        while(j<m){
            while(j+1 < m && arr2[j] == arr2[j+1])
            j++;
            uni.push_back(arr2[j++]);
        }
        return uni;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends

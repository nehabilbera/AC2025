//To find Missing Number in an Array

//Time Complexity : O(N)
//Space Complexity : O(1)

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
   int i,sum;
   sum = N*(N+1)/2;
   for(i=0;i<(N-1);i++){
       sum=sum-A[i];
   }
   return sum;
}

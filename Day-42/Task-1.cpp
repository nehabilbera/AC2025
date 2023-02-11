// Balloon Everywhere

// Time Complexity : O(N)
// Space Complexity : O(1)

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        int len=s.length();
        int b=0,a=0,l=0,o=0,n=0;
        int B=1,A=1,L=2,O=2,N=1;
        for(int i=0;i<len;i++){
            if(s[i]=='b'){
                b++;
            }else if(s[i]=='a'){
                a++;
            }else if(s[i]=='l'){
                l++;
            }else if(s[i]=='o'){
                o++;
            }else if(s[i]=='n'){
                n++;
            }
        }
        int mini;
        mini=min(1000001,b/B);
        mini=min(mini,a/A);
         mini=min(mini,n/N);
          mini=min(mini,o/O);
           mini=min(mini,l/L);
           return mini;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends

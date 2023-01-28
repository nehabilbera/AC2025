// Find the K-Beauty of the number
// Time Complexity : O(N)
// Space Complexity : O(1)


class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string str=to_string(num);
        int i=0,n,j=0,count=0;
        n=str.length();
        while(j<n){
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                string s=str.substr(i,k);
                int n=stoi(s);
                if(n!=0 && num%n==0){
                    count++;
                }
                i++;
                j++;
            }
        }
        return count;
    }
};


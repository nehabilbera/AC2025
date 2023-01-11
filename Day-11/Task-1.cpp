// Duplicates Zeroes 
// Time complexity : O(N^2)


class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i,n,j;
        n=arr.size();
        for(i=0;i<n;i++){
            if(arr[i]==0&&i!=n-1){
                for(j=n-1;j>i+1;j--)
                    arr[j]=arr[j-1];
                
                arr[i+1]=0;
                i++;
            }
        }
    }
};

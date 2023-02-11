// Find Peak Element

// Time Complexity : O(logN)
// Space Complexity : O(1)

int peakIndexMountainArray(vector<int>& arr,int n){
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    while(high > low){
        if(arr[mid] < arr[mid+1]){
            low=mid+1;
        }
        else{
            high=mid;
        }
        mid=low+(high-low)/2;
    }
    return low;
}

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        return peakIndexMountainArray(nums,nums.size());
    }
};

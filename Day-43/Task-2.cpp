// 153. Find Minimum in Rotated Sorted Array
// Time Complexity : O(logN)
// Space Complexity : O(1)

int pivot(vector<int>& arr , int n){
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;

    while(low < high){
        if(arr[mid] >= arr[0]){
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
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(nums[0] <= nums[n-1]) return nums[0];
        int ans=pivot(nums,n);
        return nums[ans];
    }
};

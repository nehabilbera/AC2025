// Search Insert Position
// Time Complexity : O(logN)
// Space Complexity : O(1)


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i,j,n;
        n=nums.size();
        if(target > nums[n-1]){
            j=n;
        }
        if(target < nums[0]){
            j=0;
        }
        for(i=0;i<n;i++){
            if(nums[i]==target){
                j = i;
            }
            else if(nums[i]<target){
                j=(i+1);
            }
        }
        
    return j;
    }
};

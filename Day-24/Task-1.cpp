Task 1: https://leetcode.com/problems/two-sum/
Time Complexity : O(N^2)
Space Complexity : O(1)



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,a,b;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                     a=i;
                     b=j;
                }
            }
        }
        return {a,b};
    }
};

// Unique Numbers Sum
// Time Complexity : O(N)

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> map;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(map[nums[i]] <= 1){
                sum+=nums[i];
            }
        }
        return sum;
    }
};

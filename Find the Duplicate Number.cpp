class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set <int> numSet;
        for(int i=0;i<nums.size();i++){
            if (numSet.find(nums[i]) == numSet.end())
                numSet.insert(nums[i]);
            else
                return nums[i];
        }
        return -1;
    }
};

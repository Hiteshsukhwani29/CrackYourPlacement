class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set <int> numSet;
        vector<int> n;
        for(int i=0;i<nums.size();i++){
            if (numSet.find(nums[i]) == numSet.end())
                numSet.insert(nums[i]);
            else
                n.push_back(nums[i]);
        }
        return n;
    }    
};

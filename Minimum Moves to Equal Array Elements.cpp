class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m = INT_MAX, ctr = 0;
        for(int i = 0; i < nums.size(); i++){
            m = min(m,nums[i]);
            ctr+=nums[i];
        }
        return ctr-(nums.size()*m);
    }
};

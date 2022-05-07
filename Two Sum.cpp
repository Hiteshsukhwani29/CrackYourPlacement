class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> s;
        vector <int> r;
        for(int i=0;i<nums.size();i++){
            int p = target-nums[i];
            if(s.find(p)!=s.end()){
                r.push_back(s[p]);
                r.push_back(i);
                return r;
            }
            s[nums[i]] = i;
        }
        return {};
    }
};

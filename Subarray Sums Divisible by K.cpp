class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> arr(k);
        arr[0] = 1;
        int p = 0, ctr = 0;
        for (int i : nums) {
            p = (p + i % k + k) % k;
            ctr += arr[p]++;
        }
        return ctr;
    }
};

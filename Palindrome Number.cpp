class Solution {
public:
    bool isPalindrome(int x) {
        long long k = 0;
        int s = abs(x);
        while(x) {
            k = k*10 + x%10;
            x/=10;
        }
        return k == s ? true : false;
    }
};

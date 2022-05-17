class Solution {
public:
    int reverse(int x) {
        long long k = 0;
        while(x) {
            k = k*10 + x%10;
            x/=10;
        }
        return (k<INT_MIN || k>INT_MAX) ? 0 : k;
    }
};

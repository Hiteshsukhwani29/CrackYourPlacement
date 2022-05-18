class Solution {
public:
    string intToRoman(int num) {
        string str;
        
        int a[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        
        string b[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        for(int i=0; num != 0; i++)
        {
            while(num >= a[i])
            {
                num -= a[i];
                str += b[i];
            }
        }
        
        return str;
    }
};

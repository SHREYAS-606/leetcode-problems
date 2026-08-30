class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
         long x = 0;

        
        for (long num : nums) {
            x ^= num;
        }

        
        long bit = x & (-x);

        int a = 0, b = 0;

        
        for (int num : nums) {
            if (num & bit)
                a ^= num;
            else
                b ^= num;
        }

        return {a, b};
    }
};
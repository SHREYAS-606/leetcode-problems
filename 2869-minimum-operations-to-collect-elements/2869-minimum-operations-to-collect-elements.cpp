class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        bool seen[51] = {};
        int count = 0;
        int collected = 0;

        for (int i = nums.size() - 1; i >= 0; i--) {
            count++;

            if (nums[i] <= k && !seen[nums[i]]) {
                seen[nums[i]] = true;
                collected++;
            }

            if (collected == k)
                return count;
        }

        return count;

    }
};
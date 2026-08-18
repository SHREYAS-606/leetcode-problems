class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> left(51, -1);
        vector<int> right(51, -1);
        vector<int> total(51, 0);

        for (int i = 0; i < n; i++) {
            int x = nums[i];

            int l = max(0, i - k + 1);
            int r = min(i, n - k);

            if (left[x] == -1) {
                left[x] = l;
                right[x] = r;
            }
            else if (l <= right[x] + 1) {
                right[x] = max(right[x], r);
            }
            else {
                total[x] += right[x] - left[x] + 1;
                left[x] = l;
                right[x] = r;
            }
        }

        int ans = -1;

        for (int x = 0; x <= 50; x++) {
            if (left[x] != -1)
                total[x] += right[x] - left[x] + 1;

            if (total[x] == 1)
                ans = x;
        }

        return ans;
    }
};
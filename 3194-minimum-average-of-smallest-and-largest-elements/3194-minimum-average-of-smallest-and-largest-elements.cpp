class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double small=DBL_MAX;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0;
        int r=n-1;
        while(l<r){
            double av=(nums[l]+nums[r])/2.0;
            if(av<small){
                small=av;
            }
            l++;
            r--;
        }
        return small;
        
    }
};
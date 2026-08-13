class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int r=0;
        int l=0;
        int maxi=1;
        long long sum=0;
        int len;
        while(r<n){
            sum+=nums[r];
            
            while((long long)(r-l+1)*nums[r]-sum>k){
                sum-=nums[l];
                l++;
            }
            len=r-l+1;
            maxi=maxi>len?maxi:len;
            r++;
        }

        return maxi;


        
    }
};
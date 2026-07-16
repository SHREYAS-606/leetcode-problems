class Solution {
public:
    long long gcd(long long m,long long n){
        while(n!=0){
            long long r=m%n;
            m=n;
            n=r;
        }
        
        return m;
    }
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<long long> prefixGcd(n);
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++){
            maxi=maxi>nums[i]?maxi:nums[i];
            prefixGcd[i]=gcd((long long)nums[i],(long long)maxi);
        }

        sort(prefixGcd.begin(),prefixGcd.end());
        int low=0;
        int high=n-1;
        long long ans=0;
        while(low<high){
               ans+=gcd(prefixGcd[low],prefixGcd[high]);
               low++;
               high--;
        }
        return ans;

        
    }
};
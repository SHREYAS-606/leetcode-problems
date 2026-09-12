        class Solution {
        public:
            double findMaxAverage(vector<int>& nums, int k) {
                int n=nums.size();
                int r=0;
                int l=0;
                double sum=0;
                double maxi=-DBL_MAX;
                while(r<n){
                    sum+=nums[r];
                    int len=r-l+1;
                    if(len==k){
                    maxi=max(maxi,sum/k);
                    sum-=nums[l];
                    l++;
                    }
                    r++;
                }
                return maxi;
                
            }
        };
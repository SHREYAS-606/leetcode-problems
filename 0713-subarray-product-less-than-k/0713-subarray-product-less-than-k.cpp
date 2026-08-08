class Solution {
public:
    int countSubarray(vector<int> &arr, int k){
        int n=arr.size();
        int r=0;
        int l=0;
        int prod=1;
        int count=0;
        while(r<n){
            prod*=arr[r];
            while(l<n && prod>=k){
                prod/=arr[l];
                l++;
            }
            if(prod<k){
             count+=(r-l+1);
            }
            
            r++;
        }
        return count;
    }
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        return countSubarray(nums,  k);
        
    }
};
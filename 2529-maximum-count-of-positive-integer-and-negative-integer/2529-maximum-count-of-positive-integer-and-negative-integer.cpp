class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<0){
                low=mid+1;
                
            }else{
                
                high=mid-1;
                
            }
            while(low<n && nums[low]==0){
                      low++;
         }
             while(high>=0 && nums[high]==0){
                      high--;
            }
        }
        int pos=n-low;
        int neg=high+1;
        return max(pos,neg);
        
    }
};
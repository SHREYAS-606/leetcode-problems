class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
          
             if(nums[i]==val && nums[j]!=val ){
                int t=nums[i];
                nums[i]=nums[j];
                nums[j]=t;
                i++;
                j--;
             }
             else if(nums[i]==val && nums[j]==val){
               
                j--;
             }
             else{
                i++;
             }

        }
        return j+1;
        
    }
};
class Solution {
public:
    string triangleType(vector<int>& nums) {
        int sum=nums[0]+nums[1]+nums[2];
        sum=sum-max({nums[0],nums[1],nums[2]});
        if(sum>max({nums[0],nums[1],nums[2]})){
        if(nums[0]==nums[1] && nums[2]==nums[1] && nums[0]==nums[2] ){
            return "equilateral";
        }else if(nums[0]==nums[1] || nums[2]==nums[1] || nums[0]==nums[2] ){
            return "isosceles";
        }else{
            return "scalene";
        }
        }else{
            return "none";
        }
    }
};
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                sum+=nums[i];
            }
        }
        int m=queries.size();
        vector<int> ans;
        for(int i=0;i<m;i++){
            int c=nums[queries[i][1]]+queries[i][0];
            if(nums[queries[i][1]]%2!=0 && c%2==0){
                   sum+=c;
                   
            }else if(nums[queries[i][1]]%2==0 && c%2!=0){
                sum-=nums[queries[i][1]];


            }else if(nums[queries[i][1]]%2==0 && c%2==0){
                sum-=nums[queries[i][1]];
                sum+=c;

            }
            ans.push_back(sum);
            nums[queries[i][1]]=nums[queries[i][1]]+queries[i][0];

        }
        return ans;
        
    }
};
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        for(int i=0;i<k;i++){
            auto it=pq.top();
            pq.pop();
            int val=it.first*multiplier;
            nums[it.second]=val;
            pq.push({val,it.second});
        }
        return nums;
    }
};
class Solution {
public:
    int reverseDigit(int n){
        int sum=0;
        while(n>0){
            sum=sum*10+n%10;
            n/=10;
        }
        return sum;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(reverseDigit(nums[i]));
        }
        set<int> st;
        for(int x:nums){
            st.insert(x);
        }
        return st.size();

    }
};
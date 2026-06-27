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
       
        unordered_set<int> st;
        for(int x:nums){
            st.insert(x);
            st.insert(reverseDigit(x));
        }
        return st.size();

    }
};
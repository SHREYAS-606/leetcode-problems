class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int x:nums){
            st.insert(x);
        }
        int maxi=0;
        for(int x:st){
            if(st.find(x-1)!=st.end()){
                continue;
            }else{
                int count=1;
                maxi=maxi>count?maxi:count;
                while(st.find(x+1)!=st.end()){
                    count++;
                    x=x+1;
                    maxi=maxi>count?maxi:count;
                }
            }
        }
        return maxi;
    }
};
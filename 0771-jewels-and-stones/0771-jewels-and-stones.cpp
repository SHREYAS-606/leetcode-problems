class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> st;
        int n=jewels.size();
        for(int i=0;i<n;i++){
            st.insert(jewels[i]);
        }
        int cnt=0;
        for(char x:stones){
            if(st.find(x)!=st.end()){
                cnt++;
            }
        }
        return cnt;
        
    }
};
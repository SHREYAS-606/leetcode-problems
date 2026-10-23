class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int l=target.size();
        vector<string> ans;
        int k=1;
        for(int i=0;i<l;i++){
            while(k<target[i]){
                 ans.push_back("Push");
                 ans.push_back("Pop");
                 k++;
            }
            ans.push_back("Push");
            k++;

        }
        return ans;
    }
};
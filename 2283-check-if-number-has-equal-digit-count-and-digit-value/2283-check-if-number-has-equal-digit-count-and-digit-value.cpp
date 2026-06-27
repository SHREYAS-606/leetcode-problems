class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char,int> mpp;
        int n=num.size();
        for(char x:num){
            mpp[x]++;
        }
        for(int i=0;i<n;i++){
            char c=i+'0';
            if(mpp[c]!=(num[i]-'0')){
                return false;
            }
        }
        return true;
        
    }
};
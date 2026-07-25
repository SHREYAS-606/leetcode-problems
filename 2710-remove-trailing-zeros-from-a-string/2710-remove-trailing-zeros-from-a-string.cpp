class Solution {
public:
    string removeTrailingZeros(string num) {
        int n=num.size();
        int i=n-1;
        for(i;i>=0;i--){
            if(num[i]-'0'!=0){
                break;
            }
        }
        string ans="";

        for(int k=0;k<=i;k++){
              ans+=num[k];
        }
        return ans;
        
    }
};
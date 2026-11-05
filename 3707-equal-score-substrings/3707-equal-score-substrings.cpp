class Solution {
public:
    bool scoreBalance(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(s[i]-'a'+1);
        }
        int a=0;
        for(int i=0;i<n;i++){
            a+=(s[i]-'a'+1);
            if(a==sum-a){
                return true;
            }
        }
        return false;

        
    }
};
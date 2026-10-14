class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans="";
        if(num*9<sum)return ans;
        for(int i=0;i<num;i++){
            if(sum>9){
                ans+=('0'+9);
                sum-=9;
            }else{
                ans+=('0'+sum);
                sum=0;
            }
        }
        return ans;
    }
};
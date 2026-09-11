class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {


        int n=answerKey.size();
        int r=0;
        int l=0;
        int trueCount=0;
        int falseCount=0;
        int maxi=0;
        while(r<n){
           if(answerKey[r]=='T'){
            trueCount++;
           }else{
            falseCount++;
           }
           int len=r-l+1;
           int mini=min(trueCount,falseCount);
           while(mini>k){
            if(answerKey[l]=='T'){
                trueCount--;
            }else{
                falseCount--;
            }
            mini=min(trueCount,falseCount);
            l++;
           }
           if(mini<=k){
             maxi=max(maxi,r-l+1);
           }
           r++;
        }
        return maxi;
        
    }
};
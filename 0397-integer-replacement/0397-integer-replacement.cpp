class Solution {
public:
    int integerReplacement(int n) {
        long long k=n;
        int ans=0;
        while(k!=1){
            if(k%2==0){
                k=k/2;
            }else if(k==3 || k%4==1){
               k--;
            }else{
                k++;
            }
            ans++;
        }
        return ans;
        
    }
};
class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
        int i=0;
        int j=n-1;
        int l=0;
        int r=0;
        int lsum=0;
        int rsum=0;
        while(i<j){
            if(num[i]=='?'){
                l++;
            }else{
                lsum+=num[i]-'0';
            }
             if(num[j]=='?'){
                r++;
            }else{
                rsum+=num[j]-'0';
            }
            i++;
            j--;
        }
        int diff=lsum-rsum;
        if((l+r)%2==1){
            return true;
        }

        if(l==r){
            return diff!=0;
        }

        if(l>r){
            diff+=9*(l-r)/2;
        }else{
            diff-=9*(r-l)/2;
        }
        return diff!=0;

    }
};
class Solution {
public:
    bool isThree(int n) {
        int count=0;
        if(n<=3)return false;
        else{
             for(int i=1;i<=n;i++){
                if(n%i==0 && count<3){
                    count++;
                }else if(n%i==0 && count>=3){
                    return false;
                }
             }
        }
        return count==3;
        
    }
};
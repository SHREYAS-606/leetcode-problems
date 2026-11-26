class Solution {
public:
    bool canAliceWin(int n) {
        int i=10;
        int k=0;
        while(n>=i){
            n=n-i;
            i--;
            k=k^1;
        }
        if(k==0){
            return false;
        }
        return true;
    }
};
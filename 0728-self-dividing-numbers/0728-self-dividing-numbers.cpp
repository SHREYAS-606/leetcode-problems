class Solution {
public:
    int isdivisible(int n){
        int k=n;
        while(k>0){
            if(k%10==0){
                return 0;
            }
            if( (n%(k%10))!=0){
                return 0;
            }
            k=k/10;
        }
        return 1;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int h=isdivisible(i);
            if(h==1){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};
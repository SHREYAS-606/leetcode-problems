class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int m=fruits.size();
        int n=baskets.size();
        int count=0;
        for(int i=0;i<m;i++){
            int isplaced=0;
            for(int j=0;j<n;j++){
                if(baskets[j]!=-1 && fruits[i]<=baskets[j]){
                        isplaced=1;
                        baskets[j]=-1;
                        break;
                }
            }
            if(!isplaced){
                count++;
            }
        }
        return count;
    }
};
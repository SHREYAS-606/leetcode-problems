class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            int c=prices[i]-m;
            profit=max(c,profit);
            m=min(m,prices[i]);
            

        }
        return profit;
        
    }
};
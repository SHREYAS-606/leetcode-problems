class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans=0;
        ans+=1LL*min(costBoth,cost1+cost2)* 1LL*min(need1,need2);
        if(need1>need2){
            ans+=1LL*min(costBoth,cost1)*1LL*(need1-need2);
        }
        if(need1<need2){
            ans+=1LL*min(costBoth,cost2)*1LL*(need2-need1);
        }
        return ans;

    }
};
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int rsum=0;
        int lsum=0;
        int maxi=0;
        for(int i=k-1;i>=0;i--)lsum+=cardPoints[i];
        maxi=lsum;
        int j=n-1;
        for(int i=k-1;i>=0;i--){
            lsum-=cardPoints[i];
            rsum+=cardPoints[j];
            maxi=maxi>(lsum+rsum)?maxi:(lsum+rsum);
            j--;
        }
        return maxi;

        
    }
};
class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int k='z'-s[i]+1;
            k=k*(i+1);
            sum+=k;
        }
        return sum;
        
    }
};
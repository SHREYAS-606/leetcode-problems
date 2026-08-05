class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> lastOcc;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==c){
                lastOcc.push_back(i);
            }
        }
        int l=0;
        int m=lastOcc.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
             while(l < m - 1 && i > lastOcc[l + 1])
                l++;
            if(l==0 && i<=lastOcc[l]){
                ans.push_back(lastOcc[l]-i);
            }else if(l==m-1 && i>lastOcc[l]){
                ans.push_back(i-lastOcc[l]);
            }else{
                
                int mini=abs(lastOcc[l]-i)<abs(lastOcc[l+1]-i)?abs(lastOcc[l]-i):abs(lastOcc[l+1]-i);
                ans.push_back(mini);
                
            }

        }
        return ans;

    }
};
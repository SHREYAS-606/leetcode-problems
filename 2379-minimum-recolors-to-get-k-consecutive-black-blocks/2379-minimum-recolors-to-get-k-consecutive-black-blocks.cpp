class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int r=0;
        int l=0;
        int wc=0;
        int mini=INT_MAX;
        while(r<n){
            if(blocks[r]=='W'){
                wc++;
            }
            int len=r-l+1;
            if(len==k){
               mini=min(wc,mini);
               if(blocks[l]=='W')wc--;
               l++;
            }
            r++;
        }
        return mini;
        
    }
};
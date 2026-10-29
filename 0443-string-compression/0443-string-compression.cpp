class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        char c=' ';
        int count=0;
        string ans="";
        for(int i=0;i<n;i++){
            if(c==' '){
                c=chars[i];
                count++;
            }else if(chars[i]==c){
                count++;
            }else{
                  ans+=c;
                  if(count>1){
                  ans+=to_string(count);
                  }
                  c=chars[i];
                  count=1;
            }
        }
        ans+=c;
        if(count>1){
        ans+=to_string(count);
        }
        int k=ans.size();
        
        for(int j=0;j<k;j++){
            chars[j]=ans[j];
        }
        return k;
        
        
    }
};
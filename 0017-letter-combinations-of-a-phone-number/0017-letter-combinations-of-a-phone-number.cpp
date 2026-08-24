class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        unordered_map<char,string> mpp={
            {'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}
        };
        queue<string> q;
        for(int i=0;i<n;i++){
            if(q.size()==0){
                int k=mpp[digits[i]].size();
                for(int j=0;j<k;j++){
                    q.push(string(1,mpp[digits[i]][j]));
                }

            }else{
                int y=q.size();
                for(int l=0;l<y;l++){
                    string st=q.front();
                    q.pop();
                    for(int m=0;m<mpp[digits[i]].size();m++){
                        q.push(st+mpp[digits[i]][m]);
                    }
                }

            }
            
            
           
        }
        vector<string> ans;
            while(q.size()!=0){
                ans.push_back(q.front());
                q.pop();

            }
            return ans;
        
    }
};
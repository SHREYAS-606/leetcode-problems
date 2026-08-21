class Solution {
public:
    string intToRoman(int num) {
          vector<int> value={
            1000,900,500,400,100,90,50,40,10,9,5,4,1
          };
          vector<string> st={
            "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"
          };
          string ans="";
          int n=value.size();
          for(int i=0;i<n;i++){
            while(value[i]<=num){
                ans+=st[i];
                num-=value[i];
            }
        }
          return ans;
    }
};
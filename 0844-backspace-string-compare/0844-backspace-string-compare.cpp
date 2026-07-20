class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string str1="";
        string str2="";
        for(char x:s){
            if(x =='#'){
                if(str1.size()>0){
                str1.pop_back();
                }
            }else{
                str1+=x;
            }

        }
        for(char y:t){
           if(y=='#'){
            if(str2.size()>0){
                str2.pop_back();
            }
            }else{
                str2+=y;
            }
        }
        if(str1==str2){
            return true;
        }
        return false;
        
    }
};
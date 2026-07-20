class Solution {
public:
    string removeDuplicates(string s) {
        string str="";
        for(char x:s){
            if(str.size()>0 && x==str.back()){
                str.pop_back();
            }else{
                str+=x;
            }
        }
        return str;
        
    }
};
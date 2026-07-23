class Solution {
public:
    int convert(string s){
        int n=s.size();
        int num=0;
        for(int i=0;i<n;i++){
            num=num*10+(s[i]-'0');
        }
        return num;
    }
    bool areNumbersAscending(string s) {
        int n=s.size();
        string token="";
        vector<string> tokenize;
        for(int i=0;i<n;i++){
            if(s[i]==' ' && token!=""){
                 tokenize.push_back(token);
                 token="";
            }else{
                token+=s[i];
            }

        }
        if(token!=""){
            tokenize.push_back(token);
        }
        int num=-1;
        int m=tokenize.size();
        for(int i=0;i<m;i++){
            if(isdigit(tokenize[i][0])){
                int cnum=convert(tokenize[i]);
                if(cnum>num){
                    num=cnum;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};
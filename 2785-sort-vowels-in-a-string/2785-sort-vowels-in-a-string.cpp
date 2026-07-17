class Solution {
public:
    bool isvowel(char c){
        return c=='a'|| c=='e'||c=='u'||c=='o'||c=='i'|| c=='A'|| c=='E'||c=='U'||c=='O'||c=='I';
    }
    string sortVowels(string s) {
        vector<char> ch;
        for(char x:s){
            if(isvowel(x)){
            ch.push_back(x);
            }
        }
        sort(ch.begin(),ch.end());
        int n=s.size();
        int ind=0;
        for(int i=0;i<n;i++){
            if(isvowel(s[i])){
                s[i]=ch[ind];
                ind++;
            }
        }
        return s;

        
    }
};
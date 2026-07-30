class Solution {
public:
    string reverseByType(string s) {
        int n=s.size();

        int s1=0;
        int s2=n-1;
        int c1=0;
        int c2=n-1;
        while(s1<s2 || c1<c2){
            while(s1<s2 && isalpha(s[s1])){
                s1++;
            }
            while(s1<s2 && isalpha(s[s2])){
                s2--;
            }
            while(c1<c2 && !isalpha(s[c1])){
                c1++;
            }
            while(c1<c2 && !isalpha(s[c2])){
                c2--;
            }
            if(s1<s2){
                char temp=s[s1];
                s[s1]=s[s2];
                s[s2]=temp;
                s1++;
                s2--;
            }
             if(c1<c2){
                char t=s[c1];
                s[c1]=s[c2];
                s[c2]=t;
                c1++;
                c2--;
            }
        }
        return s;
    }
};
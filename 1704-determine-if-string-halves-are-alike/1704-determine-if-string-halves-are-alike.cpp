class Solution {
public:
    bool halvesAreAlike(string s) {
        int low=0;
        int high=s.size()-1;
        int vow1=0;
        int vow2=0;
        while(low<high){
            if(s[low]=='a' || s[low]=='e' || s[low]=='u'|| s[low]=='o'|| s[low]=='i'|| s[low]=='A'||s[low]=='E'||s[low]=='I'|| s[low]=='O'||s[low]=='U'){
                vow1++;
            }
            if(s[high]=='a' || s[high]=='e'|| s[high]=='u'|| s[high]=='o'||s[high]=='i'||s[high]=='A'||s[high]=='E'||s[high]=='I'|| s[high]=='O'||s[high]=='U'){
                vow2++;
            }
            low++;
            high--;
            
        }
        if(vow1==vow2)return true;
        return false;
        
    }
};
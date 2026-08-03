class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n=s.size();
        for(int i=0;i<n;i++){
            if(distance[s[i]-'a']!=-1 && ((i+distance[s[i]-'a']+1)>n || s[i]!=s[i+distance[s[i]-'a']+1] )){
                return false;
            }
            if(distance[s[i]-'a']!=-1 && (i+distance[s[i]-'a']+1)<n && s[i]==s[i+distance[s[i]-'a']+1]){
                distance[s[i]-'a']=-1;
            }
        }
        return true;
    }
};
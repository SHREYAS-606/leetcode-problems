class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string st = "";

        for (char c : s) {
            if (c == ' ') {
                reverse(st.begin(), st.end());

                if (!ans.empty()) {
                    ans.push_back(' ');
                }

                ans += st;
                st.clear();
            } else {
                st.push_back(c);
            }
        }

        reverse(st.begin(), st.end());

        if (!ans.empty()) {
            ans.push_back(' ');
        }

        ans += st;
        return ans;
    }
};
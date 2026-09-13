class Solution {

public:
    string longestNiceSubstring(string s) {
        string ans = "";

        for (int i = 0; i < s.size(); i++) {

            for (int j = i; j < s.size(); j++) {

                bool lower[26] = {false};
                bool upper[26] = {false};
                for (int k = i; k <= j; k++) {

                    if (s[k] >= 'a' && s[k] <= 'z')
                        lower[s[k] - 'a'] = true;

                    else
                        upper[s[k] - 'A'] = true;
                }
                bool nice = true;

                for (int k = 0; k < 26; k++) {
                    if (lower[k] != upper[k]) {
                        nice = false;
                        break;
                    }
                }

                if (nice && (j - i + 1) > ans.size()) {
                    ans = s.substr(i, j - i + 1);
                }
            }
        }

        return ans;
    }
};
    
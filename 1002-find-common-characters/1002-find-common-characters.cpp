class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(26, 0);

        for (char c : words[0])
            freq[c - 'a']++;

        for (int i = 1; i < words.size(); i++) {
            vector<int> cnt(26, 0);

            for (char c : words[i])
                cnt[c - 'a']++;

            for (int j = 0; j < 26; j++)
                freq[j] = min(freq[j], cnt[j]);
        }

        vector<string> ans;

        for (int i = 0; i < 26; i++)
            while (freq[i]--)
                ans.push_back(string(1, 'a' + i));

        return ans;
    }
};
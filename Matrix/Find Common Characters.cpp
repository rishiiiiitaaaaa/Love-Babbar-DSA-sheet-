class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector<vector<int>> freq(n, vector<int>(26, 0));
        for (int i = 0; i < n; ++i) {
            for (auto c : words[i]) {
                freq[i][c-'a']++;
            }
        }
        vector<string> ans;
        int i = 0;
        while (i < 26) {
            bool isCommon = true;
            for (int j = 0; j < n; ++j) {
                if (freq[j][i] == 0) {
                    isCommon = false;
                    break;
                }
                freq[j][i]--;
            }
            if (isCommon)
                ans.push_back(string(1, i+'a'));
            else
                i++;
        }
        return ans;
    }
};

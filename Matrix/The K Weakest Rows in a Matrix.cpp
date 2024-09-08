class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> vec;
        vector<int> ans;
        for(int i = 0; i < mat.size(); i++){
            int val = accumulate(mat[i].begin(), mat[i].end(), 0);
            vec.push_back({val, i});
        }
        sort(vec.begin(), vec.end());
        for(int i = 0; i < k; i++) ans.push_back(vec[i].second);
        return ans;
    }
};

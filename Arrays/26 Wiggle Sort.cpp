class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), j = n - 1;
        vector<int> result(n);
        for (int i = 1; i < n; i += 2) result[i] = nums[j--];
        for (int i = 0; i < n; i += 2) result[i] = nums[j--];
        nums = result;
    }
};

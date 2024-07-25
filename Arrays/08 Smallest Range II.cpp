class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = nums[n-1] - nums[0];
        int maxi = max(nums[0] + k,nums[n-1] - k);

        for(int i = 1;i < n;i++) {
            int mini = min(nums[0] + k,nums[i] - k);
            ans = min(ans,maxi - mini);
            maxi = max(nums[i] + k,nums[n-1] - k);
        }
        return ans;
    }
};

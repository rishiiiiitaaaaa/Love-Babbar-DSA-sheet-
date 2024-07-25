class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        int n = nums.size();
        int cnt = 0;

        unordered_map<int, int> hash;

        for(int i=0;i<n;i++) {
            if(hash[k - nums[i]]) {
                hash[k-nums[i]]--;
                cnt++;
            }

            else {
                hash[nums[i]]++;
            }
        }

        return cnt;
    }
};

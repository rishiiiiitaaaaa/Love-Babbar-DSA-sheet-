Approach 1:

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zero = 0;
        int one = 0;
        int two = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] == 0)
            {
                zero++;
            }
            else if(nums[i] == 1)
            {
                one++;
            }
            else
            {
                two++;
            }
        }
        int i = 0;
        while(zero--)
        {
            nums[i++] = 0;
        }
        while(one--)
        {
            nums[i++] = 1;
        }
        while(two--)
        {
            nums[i++] = 2;
        }
    }
};

Approach 2:
class Solution {
public:
    void sortColors(vector<int>& nums) {
sort(nums.begin(),nums.end());
}
};

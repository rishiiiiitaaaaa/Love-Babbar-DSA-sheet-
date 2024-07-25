class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int e=0;
        int o=1;
      int size=nums.size();
      vector<int> ans(size);
      for(int i=0;i<nums.size();i++)
      {
         if(nums[i]%2==0){
            ans[e]=nums[i];
            e+=2;
       }
         else{
            ans[o]=nums[i];
            o+=2;
         }
      }
      return ans;        
    }
};

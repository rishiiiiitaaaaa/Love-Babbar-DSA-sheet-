class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()==0) return 0;
        int maxConseq=1;
        int conseq=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]+1){
                conseq++;
                maxConseq=max(conseq, maxConseq);
            }
           
            else if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                conseq=1;
            }
        }
        return maxConseq;
    }
};

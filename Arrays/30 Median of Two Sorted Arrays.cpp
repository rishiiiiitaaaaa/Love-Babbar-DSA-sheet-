class Solution 
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>merged;
        for(int i=0;i<n;i++)
        {
            merged.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++)
        {
            merged.push_back(nums2[i]);
        }
        sort(merged.begin(),merged.end());
        int x=merged.size();
        if (x % 2 == 1) {
            return (merged[x / 2]);
        } else {
            int midx1 = merged[x / 2 - 1];
            int midx2 = merged[x / 2];
            return ((midx1) + (midx2)) / 2.0;
        }
    }
};

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int leftSum = 0, rightSum = 0;
        for(int i = 0; i < k; i++)
        leftSum += cardPoints[i];
        int ans = leftSum;
        int i = k-1;
        int j = n-1;

        while(i >= 0)
        {
            rightSum += cardPoints[j];
            leftSum -= cardPoints[i];
            ans = max(ans,rightSum + leftSum);
            i--;
            j--;
        }

        return ans;
    }
};

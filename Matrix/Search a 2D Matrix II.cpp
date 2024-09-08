class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

        int rowindex = 0;
        int colindex = col-1;

        while(rowindex < row  &&  colindex>=0)
        {
            int ele=matrix[rowindex][colindex];
            if(ele==target)
            {
                return 1;
            }
            if(ele<target)
            {
                rowindex++;
            }
            else
            {
                colindex--;
            }
        }
        return 0;
    }
};

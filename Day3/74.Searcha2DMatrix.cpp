
//Leetcode link: https://leetcode.com/problems/search-a-2d-matrix/description/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

        int r=0,c=col-1;

        while(r<row && c>-1)
        {
            if(matrix[r][c]==target)
            return true;
            else if( matrix[r][c]<target)
            r++;
            else
            c--;
        }
        return false;
    }
};

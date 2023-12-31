// https://leetcode.com/problems/search-a-2d-matrix-ii/description/
// 240. Search a 2D Matrix II
// Medium level problem

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col - 1;

        while (rowIndex < row && colIndex >= 0)
        {
            int element = matrix[rowIndex][colIndex];

            if (element == target)
            {
                return 1;
            }
            if (element < target)
            {
                rowIndex++;
            }
            else
            {
                colIndex--;
            }
        }
        return 0;
    }
};
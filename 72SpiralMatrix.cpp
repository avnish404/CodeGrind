class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();

        int total=row*col;

        int count=0;

        int startingRow=0;
        int endingCol=col-1;
        int endingRow=row-1;
        int startingCol=0;


        while(count<total)
        {
            //Printing First row
            for(int i=startingCol;count<total && i<=endingCol;i++)
            {
                    ans.push_back(matrix[startingCol][i]);
                    count++;
            }
            startingRow++;

            //Printing Last Column
            for(int i=startingRow;count<total && i<=endingRow;i++)
            {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            //Printing Last Row
            for(int i=endingCol;i>=startingCol && count<total ;i--)
            {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }

            endingRow--;

            //Printing First Col
            for(int i=endingRow;i>=startingRow && count<total ;i--)
            {
                    ans.push_back(matrix[i][startingCol]);
                    count++;
            }
            startingCol++;
        }

        return ans;

    }
};

/*

54. Spiral Matrix
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100

*/
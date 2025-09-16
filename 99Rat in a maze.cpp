class Solution
{
public:
    bool isPossible(vector<vector<int>> &maze, int newx, int newy, vector<vector<int>> &m, int n)
    {
        if (newx >= 0 && newx < n && newy >= 0 && newy < n && maze[newx][newy] == 1 && m[newx][newy] == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void solve(vector<vector<int>> &maze, int x, int y, string output, vector<string> &ans, vector<vector<int>> &m, int n)
    {
        // base case
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(output);
            return;
        }
        m[x][y] = 1;
        // Down shift
        int newx = x + 1;
        int newy = y;
        if (isPossible(maze, newx, newy, m, n))
        {
            output.push_back('D');
            solve(maze, newx, newy, output, ans, m, n);
            output.pop_back();
        }

        // Left Shift
        newx = x;
        newy = y - 1;
        if (isPossible(maze, newx, newy, m, n))
        {
            output.push_back('L');
            solve(maze, newx, newy, output, ans, m, n);
            output.pop_back();
        }

        // Right shift
        newy = y + 1;
        newx = x;
        if (isPossible(maze, newx, newy, m, n))
        {
            output.push_back('R');
            solve(maze, newx, newy, output, ans, m, n);
            output.pop_back();
        }

        // Up shift
        newx = x - 1;
        newy = y;
        if (isPossible(maze, newx, newy, m, n))
        {
            output.push_back('U');
            solve(maze, newx, newy, output, ans, m, n);
            output.pop_back();
        }
        m[x][y] = 0;
    }
    vector<string> ratInMaze(vector<vector<int>> &maze)
    {
        // code here
        int x = 0;
        int y = 0;
        string output = "";
        vector<string> ans;

        vector<vector<int>> m = maze;
        if (maze[x][y] == 0)
        {
            return ans;
        }

        // initialising new vector with zero
        for (int i = 0; i < maze[0].size(); i++)
        {
            for (int j = 0; j < maze[0].size(); j++)
            {
                m[i][j] = 0;
            }
        }
        int n = maze[0].size();

        solve(maze, x, y, output, ans, m, n);
        sort(ans.begin(), ans.end());

        return ans;
    }
};

/*

Rat in a Maze Problem - I
Difficulty: MediumAccuracy: 35.75%Submissions: 374K+Points: 4Average Time: 25m
Consider a rat placed at position (0, 0) in an n x n square matrix mat[][]. The rat's goal is to reach the destination at position (n-1, n-1). The rat can move in four possible directions: 'U'(up), 'D'(down), 'L' (left), 'R' (right).

The matrix contains only two possible values:

0: A blocked cell through which the rat cannot travel.
1: A free cell that the rat can pass through.
Your task is to find all possible paths the rat can take to reach the destination, starting from (0, 0) and ending at (n-1, n-1), under the condition that the rat cannot revisit any cell along the same path. Furthermore, the rat can only move to adjacent cells that are within the bounds of the matrix and not blocked.
If no path exists, return an empty list.

Note: Return the final result vector in lexicographically smallest order.

Examples:

Input: mat[][] = [[1, 0, 0, 0], [1, 1, 0, 1], [1, 1, 0, 0], [0, 1, 1, 1]]
Output: ["DDRDRR", "DRDDRR"]
Explanation: The rat can reach the destination at (3, 3) from (0, 0) by two paths - DRDDRR and DDRDRR, when printed in sorted order we get DDRDRR DRDDRR.
Input: mat[][] = [[1, 0], [1, 0]]
Output: []
Explanation: No path exists as the destination cell is blocked.
Input: mat = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]
Output: ["DDRR", "RRDD"]
Explanation: The rat has two possible paths to reach the destination: 1. "DDRR" 2. "RRDD", These are returned in lexicographically sorted order.
Constraints:
2 ≤ mat.size() ≤ 5
0 ≤ mat[i][j] ≤ 1

Expected Complexities
Company Tags
AmazonMicrosoft
Topic Tags
Related Interview Experiences
Related Articles



*/
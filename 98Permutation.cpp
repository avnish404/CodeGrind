class Solution
{
public:
    void solve(vector<int> nums, int index, vector<vector<int>> &ans)
    {
        // Base case
        if (index >= nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for (int j = index; j < nums.size(); j++)
        {
            swap(nums[index], nums[j]);
            solve(nums, index + 1, ans);

            // Backtracking
            swap(nums[index], nums[j]);
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, index, ans);
        return ans;
    }
};

/*


46. Permutations
Solved
Medium
Topics
premium lock icon
Companies
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.



Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]


Constraints:

1 <= nums.length <= 6
-10 <= nums[i] <= 10
All the integers of nums are unique.


Seen this question in a real interview before?
1/5
Yes
No
Accepted
2,772,553/3.4M
Acceptance Rate
81.1%
Topics
icon
Companies
Similar Questions
Discussion (175)

Choose a type



Copyright © 2025 LeetCode. All rights reserved.


*/
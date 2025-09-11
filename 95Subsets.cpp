class Solution
{
public:
    void solve(vector<vector<int>> &ans, vector<int> output, int index, vector<int> nums)
    {

        // Base case
        if (index >= nums.size())
        {
            ans.push_back(output);
            return;
        }

        // Exclusion call on nums
        solve(ans, output, index + 1, nums);

        // Inclusion call on nums
        int elem = nums[index];
        output.push_back(elem);
        solve(ans, output, index + 1, nums);
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;

        solve(ans, output, index, nums);

        return ans;
    }
};

/*
//Before solving this make a tree for exclusion and inclusion call

78. Subsets
Solved
Medium
Topics
premium lock icon
Companies
Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.



Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]


Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.


Seen this question in a real interview before?
1/5
Yes
No
Accepted
2,690,533/3.3M
Acceptance Rate
81.4%
Topics
icon
Companies
Similar Questions
Discussion (217)

Choose a type



Copyright © 2025 LeetCode. All rights reserved.


*/
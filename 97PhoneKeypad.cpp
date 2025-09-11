class Solution
{
public:
    void solve(string digits, vector<string> &ans, string output, int index, string mapping[])
    {
        // Base case
        if (index >= digits.length())
        {
            ans.push_back(output);
            return;
        }

        // extracting string according to digits
        int num = digits[index] - '0';
        string elem = mapping[num];

        for (int i = 0; i < elem.length(); i++)
        {
            output.push_back(elem[i]);

            // Making Recursive call
            solve(digits, ans, output, index + 1, mapping);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        string output;
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if (digits.length() == 0)
        {
            return ans;
        }
        solve(digits, ans, output, index, mapping);
        return ans;
    }
};

/*


17. Letter Combinations of a Phone Number
Solved
Medium
Topics
premium lock icon
Companies
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.




Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:

Input: digits = ""
Output: []
Example 3:

Input: digits = "2"
Output: ["a","b","c"]


Constraints:

0 <= digits.length <= 4
digits[i] is a digit in the range ['2', '9'].


Seen this question in a real interview before?
1/5
Yes
No
Accepted
2,701,010/4.2M
Acceptance Rate
64.5%
Topics
icon
Companies
Similar Questions
Discussion (327)

Choose a type



Copyright © 2025 LeetCode. All rights reserved.


*/
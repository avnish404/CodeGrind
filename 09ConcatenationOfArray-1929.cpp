class Solution {
    public:
        vector<int> getConcatenation(vector<int>& nums) {
            vector<int>ans;
            if(nums.size()==0)
            {
                return nums;
            }
            for(int i=0;i<nums.size();i++)
            {
                ans.push_back(nums[i]);
            }
             for(int i=0;i<nums.size();i++)
            {
                ans.push_back(nums[i]);
            }
    
            return ans;
        }
    };


    /*
    Example 1:

Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]
Example 2:

Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
- ans = [1,3,2,1,1,3,2,1]
    */
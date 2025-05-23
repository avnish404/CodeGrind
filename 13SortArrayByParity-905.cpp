class Solution {
    public:
        vector<int> sortArrayByParity(vector<int>& nums) {
            vector<int>ans;
            if(nums.size()==0 || nums.size()==1)
            {
                return nums;
            }
    
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]%2==0)
                {
                    ans.push_back(nums[i]);
                }
            }
    
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]%2!=0)
                {
                    ans.push_back(nums[i]);
                }
            }
    
            return ans;
        }
    };


    /*
    Example 1:

Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
Example 2:

Input: nums = [0]
Output: [0]
    */
class Solution {
    public:
        bool isMonotonic(vector<int>& nums) {
         int n=nums.size();
            int inc=0;
            int dec=0;
            for(int i=0;i<n-1;i++)
            {
                if(nums[i]<nums[i+1])
                {
                    inc++;
                }
                else if(nums[i]==nums[i+1])
                {
                    continue;
                }
                else
                {
                    dec++;
                }
                if(inc>0 && dec>0)
                {
                    return false;
                }
            }
            return true;
        }
    };


    /*
    Example 1:

Input: nums = [1,2,2,3]
Output: true
Example 2:

Input: nums = [6,5,4,4]
Output: true
Example 3:

Input: nums = [1,3,2]
Output: false
 

Constraints:

1 <= nums.length <= 105
-105 <= nums[i] <= 105
    */
class Solution {
    public:
        vector<int> shuffle(vector<int>& nums, int n) {
            if(nums.size()==0 || nums.size()==1 || nums.size()%2 != 0)
            {
                return nums;
            }
            int i=0,j=n;
            vector<int>ans;
            while(i<n && j<nums.size())
            {
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                i++;
                j++;
            }
            return ans;
        }
    };


    /*Example 1:

Input: nums = [2,5,1,3,4,7], n = 3
Output: [2,3,5,4,1,7] 
Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].
Example 2:

Input: nums = [1,2,3,4,4,3,2,1], n = 4
Output: [1,4,2,3,3,2,4,1]
Example 3:

Input: nums = [1,1,2,2], n = 2
Output: [1,2,1,2]*/
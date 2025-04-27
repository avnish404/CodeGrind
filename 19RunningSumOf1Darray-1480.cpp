class Solution {
    public:
        vector<int> runningSum(vector<int>& nums) {
            vector<int>ans;
            int sum=0;
            ans.push_back(nums[0]);
            for(int i=1;i<nums.size();i++)
            {       sum=0;
                    for(int j=0;j<=i;j++)
                    {
                        sum=sum+nums[j];
                        
                    }
                    ans.push_back(sum);
            }
    
            return ans;
        }
    };

    /*
    Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
 
    */
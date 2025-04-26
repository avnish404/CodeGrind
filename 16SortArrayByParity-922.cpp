class Solution {
    public:
        vector<int> sortArrayByParityII(vector<int>& nums) {
        
            vector<int>ans(nums.size());
    
            int evenIndex=0;
            int oddIndex=0;
           
            for(int i=0;i<nums.size();i++)
            {
                    if(nums[i]%2==0)
                    {
                        for(int j=evenIndex;j<nums.size();j++)
                        {
                            if(j%2==0)
                            {
                                ans[j]=nums[i];
                                evenIndex=j+1;
                                break;
                            }
    
                        }
                    }
                    else
                    {
                       if(nums[i]%2!=0)
                    {
                        for(int j=oddIndex;j<nums.size();j++)
                        {
                            if(j%2!=0)
                            {
                                ans[j]=nums[i];
                                oddIndex=j+1;
                                break;
                            }
    
                        }
                    } 
                    }
            }
    
            return ans;
        }
    };


    /*
    Example 1:

Input: nums = [4,2,5,7]
Output: [4,5,2,7]
Explanation: [4,7,2,5], [2,5,4,7], [2,7,4,5] would also have been accepted.
Example 2:

Input: nums = [2,3]
Output: [2,3]
    */
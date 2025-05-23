class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int val=0;
        int zeroCount=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                zeroCount++;
            }
            else
            {
                prod=prod*nums[i];
            }
        }

        if(zeroCount>1)
        {
            for(int i=0;i<nums.size();i++)
            {
                nums[i]=0;
            }

         
        }
        else if(zeroCount==1)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)
                {
                    nums[i]=0;
                }
                else
                {
                    nums[i]=prod;
                }
            }
        }
        else if(zeroCount==0)
        {
            for(int i=0;i<nums.size();i++)
            {
                nums[i]=prod/nums[i];
            }
        }

        return nums;
    }
};



/*

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]

*/
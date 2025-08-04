class Solution {
public:

int firstOccurence(vector<int>& nums,int s,int e,int target,int ans)
{
    //Base case
    if(s>e)
    {
        return ans;
    }
    int mid=s+(e-s)/2;
   
    if(nums[mid]==target)
    {
            ans=mid;
            e=mid-1;
           return firstOccurence(nums,s,e,target,ans);
    }
    if(nums[mid]>target)
    {
        return firstOccurence(nums,s,mid-1,target,ans);
    }
    else
    {
        return firstOccurence(nums,mid+1,e,target,ans);
    }
}

int lastOccurence(vector<int>& nums,int s,int e,int target,int ans)
{
    //Base case
    if(s>e)
    {
        return ans;
    }
    int mid=s+(e-s)/2;
   
    if(nums[mid]==target)
    {
            ans=mid;
            s=mid+1;
           return lastOccurence(nums,s,e,target,ans);
    }
    if(nums[mid]>target)
    {
        return lastOccurence(nums,s,mid-1,target,ans);
    }
    else
    {
        return lastOccurence(nums,mid+1,e,target,ans);
    }
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int ans1=firstOccurence(nums,s,e,target,-1);
        int ans2=lastOccurence(nums,s,e,target,-1);
        vector<int>sol;
        sol.push_back(ans1);
        sol.push_back(ans2);

        return sol;
    }
};



/*

34. Find First and Last Position of Element in Sorted Array
Solved
Medium
Topics
premium lock icon
Companies
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 

Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109

Seen this question in a real interview before?
1/5
Yes
No
Accepted
2,805,195/5.9M


*/
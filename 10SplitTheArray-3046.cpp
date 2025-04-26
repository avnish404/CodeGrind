class Solution {
    public:
        bool isPossibleToSplit(vector<int>& nums) {
         map<int,int>mp;
         for(int num:nums)
         {
            mp[num]++;
    
         }
    
         for(auto i:mp)
         {
            if(i.second>2)
            {
                return false;
            }
         }
         return true;
        }
    };


    /*
    
    Example 1:

Input: nums = [1,1,2,2,3,4]
Output: true
Explanation: One of the possible ways to split nums is nums1 = [1,2,3] and nums2 = [1,2,4].
Example 2:

Input: nums = [1,1,1,1]
Output: false
Explanation: The only possible way to split nums is nums1 = [1,1] and nums2 = [1,1]. Both nums1 and nums2 do not contain distinct elements. Therefore, we return false.

    */
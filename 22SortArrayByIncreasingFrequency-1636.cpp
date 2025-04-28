class Solution {
    public:
        vector<int> frequencySort(vector<int>& nums) {
            map<int,int>mp;
            
            for(int i:nums)
            {
                mp[i]++;
            }
    
            sort(nums.begin(),nums.end(),[&](int a,int b){
                if(mp[a]==mp[b])
                {
                    return a>b; //returns higher number first
                }
                return mp[a]<mp[b];
    
            });
    
            return nums;
    
        }
    };


    /*
    Example 1:

Input: nums = [1,1,2,2,2,3]
Output: [3,1,1,2,2,2]
Explanation: '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.
Example 2:

Input: nums = [2,3,1,3,2]
Output: [1,3,3,2,2]
Explanation: '2' and '3' both have a frequency of 2, so they are sorted in decreasing order.
Example 3:

Input: nums = [-1,1,-6,4,5,-6,1,4,1]
Output: [5,-1,4,4,-6,-6,1,1,1]
 
    */
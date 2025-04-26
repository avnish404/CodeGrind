class Solution {
    public:
        vector<int> constructTransformedArray(vector<int>& nums) {
            vector<int>ans;
            int size=nums.size();
            for(int i=0;i<size;i++)
            {
               int pos=(i+nums[i])%size;
               if(pos<0)
               {
                pos=pos+size;
               }
               ans.push_back(nums[pos]);
            }
    
            return ans;
        }
    };
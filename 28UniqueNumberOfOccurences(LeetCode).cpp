class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        /*First Approach*/

        // int count=1;
        // vector<int>ans;
        // sort(arr.begin(),arr.end());
        // for(int i=0;i<arr.size();i++)
        // {   if(i<arr.size()-1)
        // {
        //          if(arr[i]==arr[i+1])
        //     {
        //         count++;
        //     }
        //     else
        //     {
        //         ans.push_back(count);
        //         count=1;
        //     }
        // }
        // else
        // {
        //     ans.push_back(count);
        // }
           
        // }
        
        // sort(ans.begin(),ans.end());
        // for(int i=0;i<ans.size();i++)
        // {
        //     if(i<ans.size()-1)
        //     {
        //              if(ans[i]==ans[i+1])
        //     {
        //         return false;
        //     }
        //     }
           
        // }
        // return true;


        /*Second Approach*/

        map<int,int>mp;

        for(int i:arr)
        {
            mp[i]++;
        }

        map<int,int>ans;

        for(auto& i:mp)
        {
            ans[i.second]++;
            if(ans[i.second]>1)
            {
                return false;
            }

        }
        return true;
    }
};


/*
Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 
*/
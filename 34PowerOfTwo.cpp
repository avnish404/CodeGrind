class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans=1;

        // for(int i=0;i<=30;i++)
        // {
        //     if(ans==n)
        //     {
        //         return true;
        //     }
        //         //Edge case
        //     if(ans<INT_MAX/2)
        //     {
        //         ans=ans*2;
        //     }
        // }
                        //Second Approach
                for(int i=0;i<=30;i++)
                {
                    ans=pow(2,i);
                    if(ans==n)
                    {
                        return true;
                    }
                }
        return false;
    }
};


/*

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false
 

Constraints:

-231 <= n <= 231 - 1

*/
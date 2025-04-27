class Solution {
    public:
        int xorOperation(int n, int start) {
            int digit=0;
            vector<int>ans;
            int finals=0;
    
            if(n==1)
            {
                return start;
            }
    
            for(int i=0;i<n;i++)
            {
                digit=start+2*i;
                ans.push_back(digit);
            }
    
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
            finals=ans[0]^ans[1];
            for(int i=2;i<n;i++)
            {
                finals=finals^ans[i];
            }
    
            return finals;
    
        }
    };


    /*
    Example 1:

Input: n = 5, start = 0
Output: 8
Explanation: Array nums is equal to [0, 2, 4, 6, 8] where (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
Where "^" corresponds to bitwise XOR operator.
Example 2:

Input: n = 4, start = 3
Output: 8
Explanation: Array nums is equal to [3, 5, 7, 9] where (3 ^ 5 ^ 7 ^ 9) = 8.
    */
class Solution {
    public:
        int arrangeCoins(int n) {
           int i=1;
    
           while(n>=i)
           {
            n-=i;
            i++;
           }
           return i-1;
        }
    };


    /*
    Example 1:
Input: n = 5
Output: 2
Explanation: Because the 3rd row is incomplete, we return 2.


Example 2:
Input: n = 8
Output: 3
Explanation: Because the 4th row is incomplete, we return 3.
    */
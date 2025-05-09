class Solution {
public:
    int reverse(int x) {
       long long int ans=0;
        int sign = x < 0 ? -1 : 1;
       if(x<=INT_MIN || x>=INT_MAX )
       {
        return 0;
       }
       x=abs(x);
        while(x!=0)
        {
           
           int digit=x%10;
           ans=(ans*10)+digit;
           x=x/10;
           
            
           
        }
        ans=ans*sign;
        if(ans<INT_MIN || ans>INT_MAX  )
        {
            return 0;
        }
        return ans;
    }
};



/*

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1

*/
class Solution {
public:

        //O(N) TIME COMPLEXITY AND O(1) SPACE COMPLEXITY
    bool backspaceCompare(string s, string t) {
       
       int i=0;

       while(i<s.length())
       {
         if(s[i]=='#' && i!=0)
         {      int prevChar=i-1;
            s.erase(prevChar,2);
            i=max(0,prevChar-1);

         }
         else if(s[i]=='#' &&  i==0)
         {
            s.erase(i,1);
         }
         else
         {
            i++;
         }
       }

       i=0;

       while(i<t.length())
       {
         if(t[i]=='#' && i!=0)
         {      int prevChar=i-1;
            t.erase(prevChar,2);
            i=max(0,prevChar-1);

         }
         else if(t[i]=='#' &&  i==0)
         {
            t.erase(i,1);
         }
         else
         {
            i++;
         }
       }
       i=0;

       if(s.length()==t.length())
       {
         while(i<s.length())
         {
            if(s[i]!=t[i])
            {
                return false;
            }
            i++;
         }
         return true;
       }
     
        return false;

    }
};



/*

844. Backspace String Compare
Solved
Easy
Topics
premium lock icon
Companies
Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 

Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
Example 2:

Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".
Example 3:

Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".
 

Constraints:

1 <= s.length, t.length <= 200
s and t only contain lowercase letters and '#' characters.
 

Follow up: Can you solve it in O(n) time and O(1) space?

*/
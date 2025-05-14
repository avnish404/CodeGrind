class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1,count=0;
        while(s[i]==' ')
        {
            i--;
        }
        
        for(i ;i>=0;i--)
        {
            if(s[i]==' ')
            {
                break;
            }
            else
            {
                count++;
            }
        }
        return count;
    }
        
};



/*

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
 

*/
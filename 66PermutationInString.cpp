class Solution {
public:

    bool checkEqual(int a[26],int b[26])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
            {
                return 0;
            }
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        int arr1[26]={0};
        for(int i=0;i<s1.length();i++)
        {
            int index=s1[i]-'a';
            arr1[index]++;
            
        }

        int i=0;
        int arr2[26]={0};
        int windowSize=s1.length();
        while(i<windowSize && i<s2.length())
        {
            int index=s2[i]-'a';
            arr2[index]++;
            i++;

        }

        if(checkEqual(arr1,arr2))
        {
            return 1;

        }
        while(i<s2.length())
        {
            int newIndex=s2[i]-'a';
            arr2[newIndex]++;

            int oldChar=s2[i-windowSize];
            int oldIndex=oldChar-'a';
            arr2[oldIndex]--;
            i++;
            if(checkEqual(arr1,arr2))
            {
                return 1;
            }

        }
        return 0;
    }
};

/*

567. Permutation in String
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
 

Constraints:

1 <= s1.length, s2.length <= 104
s1 and s2 consist of lowercase English letters.

*/
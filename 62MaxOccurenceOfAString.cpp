

class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        // Your code here
        // int arr[26]={0};
        
        // for(int i=0;i<s.size();i++)
        // {
        //     int number=0;
        //     if(s[i]>='a' && s[i]<='z')
        //     {
        //         number=s[i]-'a';
        //     }
        //     else
        //     {
        //         number=s[i]-'A';
        //     }
        //     arr[number]++;
        // }
        // int maxi=-1;
        // int ans=0;
        // for(int i=0;i<26;i++)
        // {
        //     if(maxi<arr[i])
        //     {
        //         ans=i;
        //         maxi=arr[i];
        //     }
        // }
        
        // char finalans='a'+ans;
        // return finalans;
        
        
        //Second Approach
        
        map<char,int>mp;
        
        for(auto i:s)
        {
            mp[i]++;
        }
        
        int maxi=-1;
        char ans;
        for(auto i:mp)
        {
            if(i.second>maxi)
            {
                maxi=i.second;
                ans=i.first;
            }
        }
        return ans;
        
    }
};


/*

Given a string s of lowercase alphabets. The task is to find the maximum occurring character in the string s. If more than one character occurs the maximum number of times then print the lexicographically smaller character.

Examples:

Input: s = "testsample"
Output: 'e'
Explanation: e is the character which is having the highest frequency.
Input: s = "output"
Output: 't'
Explanation:  t and u are the characters with the same frequency, but t is lexicographically smaller.
Constraints:
1 ≤ |s| ≤ 100


*/
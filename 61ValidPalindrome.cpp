class Solution {
public:
    // string fun(string s)
    // { 
    //     int n=s.length();
    //     string a;
    //     int var=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         if((s[i]>='a' and s[i]<='z') || (s[i]>='A' and s[i]<='Z') )
    //         {
    //            // s[i]=tolower(s[i]);
    //             a.insert(a.begin()+var,tolower(s[i]));
    //             var++;
    //         }
    //         else if(s[i]>='0' && s[i]<='9')
    //         {
    //             a.insert(a.begin()+var,s[i]);
    //             var++;
    //         }
            
    //     }
    //     cout<<a;
    //     return a;
    // }

      void getString(string &s)
    {
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                s[j++]=tolower(s[i]);
            }
        }
        s.resize(j);
    }
     bool isPalindrome(string s) {


          //First Approach (O(N) space complexity)
    //    /* if(s.length()==1)
    //     {
    //         return true;
    //     }*/
    //    string a=fun(s);
    //   //  cout<<a;
    //     bool b=true;
    //     int start=0;
    //     int end=a.length()-1;
    //    // int n=a.length();
    //     if(a.size()==0 || a.size()==1)
    //     {
    //         return true;
    //     }
    //     while(start<=end)
    //     {
    //         if(a[start++]!=a[end--])
    //         {
    //             return false;
    //         }
    //         else
    //         {
    //           b=true; 
    //         }
    //     }
      
    //     return b;



    //Second Approach O(1) space complexity and O(N) time complexity

  
        getString(s);
       
        cout<<endl;
        int st=0;
        int e=s.size()-1;
        while(st<=e)
        {
            if(s[st++]!=s[e--])
            {
                    return false;
            }
        }
        return true;

    }
};



/*

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

*/
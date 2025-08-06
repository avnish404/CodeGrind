
bool checkPalindrome(int i, string &s)
{
	//Base case
	if(i>s.length()-1-i)
	{
		return true;
	}

	if(s[i] != s[s.length()-1-i])
	{
		return false;
	}
		i++;
	return checkPalindrome(i,s);
}

bool isPalindrome(string &s)
{
	// Write your code here.
	int i=0;
	return checkPalindrome(i,s);
}




/*


 Check Palindrome
Easy
40/40
Contributed by
76 upvotes
Asked in companies
Problem statement
You're given an alphabetical string ‘S’.



Determine whether it is palindrome or not. A palindrome is a string that is equal to itself upon reversing it.



For example:
‘S’ = racecar
The reverse of ‘S’ is: racecar
Since ‘S’ is equal to its reverse. So ‘S’ is a palindrome.
Hence output will be 1.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
2
racecar
niinja


Sample Output 1 :
1
0


Explanation For Sample Input 1 :
For First Case - Same as explained in above example.

For the second case -

‘S’ = niinja
Reverse of ‘S’ is: ajniin
Since ‘S’ is not equal to its reverse. So ‘S’ is not a palindrome.
Hence output will be 0.


Sample Input 2 :
2
level
panama


Sample Output 2 :
1
0



*/
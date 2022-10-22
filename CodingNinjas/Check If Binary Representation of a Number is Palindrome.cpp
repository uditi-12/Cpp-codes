/*https://www.codingninjas.com/codestudio/problems/check-palindrome_920555?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_13*/
#include <bits/stdc++.h> 
string bin(unsigned n)
{   string ans;
    while(n > 0){
        ans = (to_string(n&1)) + ans;
        n >>= 1;
    }
    return ans;
}
bool checkPalindrome(long long N)
{
	// Write your code here.
    string s=bin(N);
    string S=s;
    reverse(s.begin(),s.end());
    if (s==S)
        return true;
    return false;
}

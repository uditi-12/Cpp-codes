/*https://www.codingninjas.com/codestudio/problems/reverse-the-string_799927?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_13*/
#include <bits/stdc++.h> 
string reverseString(string str)
{
	// Write your code here.
    string r="";
    for(int i=str.length()-1;i>=0;i--){
        r+=str[i];
    }
    return r;
}

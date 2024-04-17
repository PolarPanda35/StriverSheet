class Solution {
public:
    bool isPalindrome(int x) 
    {
        string str = to_string(x);
        string reverseStr = str;
        reverse(reverseStr.begin(), reverseStr.end());
        if(str == reverseStr) return true;
        return false;
    }
};

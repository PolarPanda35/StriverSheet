bool palindrome(int n)
{
    // Write your code here
    string revStr = to_string(n);
    string str = revStr;
    for(int i = 0; i < str.length(); i++){
        if(str[i] != revStr[str.length()-i-1]) return false;
    }
    return true;
}

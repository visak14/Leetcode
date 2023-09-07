class Solution {
public:
    void clean (string &s)
    {
        int n = s.length();
        string ans="";
        for (int i = 0 ; i < s.length(); i++){
            char c = s[i];
            if(isalnum(c)) {
                ans += tolower(c);
            }
        }
        s = ans;
    }
    
    bool checkPalindrome (string &s, int start, int end){
        if (start > end) return true;
        if (s[start] == s[end]){
            return checkPalindrome(s, start+1, end-1);
        }
        else 
            return false;
    }
 
    bool isPalindrome(string s) {
       clean(s);
       return checkPalindrome(s, 0 , s.length()-1);
    }
};
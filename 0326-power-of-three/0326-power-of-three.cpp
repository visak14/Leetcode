class Solution {
public:
    bool help(int n){
        if (n == 0 || n < 0) return false;
        if (n == 1 ) return true;
        if (n % 3 !=0) return false;
       return  help(n/3);
    }
    bool isPowerOfThree(int n) {
        return help(n);
    }
};
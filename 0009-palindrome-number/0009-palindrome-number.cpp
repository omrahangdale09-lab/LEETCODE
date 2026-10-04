class Solution {
public:
    bool isPalindrome(int x) {
        long l = x;
        long rev = 0;
        while(x != 0){
            int digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
            
        }

        if(l == rev && rev >= 0){
            return true;
        }else{
            return false;
        }
    }
};
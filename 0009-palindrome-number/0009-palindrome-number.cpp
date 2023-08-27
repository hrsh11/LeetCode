class Solution {
public:
    bool isPalindrome(int x) {
        long long digit, sum=0;
        long long n = x;
        while(x>0){
            digit = x%10;
            sum = (sum*10) + digit;
            x = x/10;
        }
        if(n==sum){
            return true;
        }
        return false;
    }
};
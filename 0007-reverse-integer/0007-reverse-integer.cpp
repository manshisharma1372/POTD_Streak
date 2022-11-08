class Solution {
public:
    int reverse(int x) {
        int last_digit;
        int reverse=0;

        while(x!=0){
            last_digit=x%10;
            if (reverse > INT_MAX/10 || reverse < INT_MIN/10){
                return 0;
                 }
            else{
            reverse=(reverse*10)+last_digit;
            x=x/10;
            }
        }
            return reverse;
    }
};
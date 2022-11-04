class Solution {
public:
    bool isPalindrome(int x) {
      long long rev=0;
        long long num=x;
        while(num>0){
            int d=num%10;
            rev=rev*10+d;
            num=num/10;
            
        }
        
        if(rev>-pow(2,31)&& rev<pow(2,31)-1)
        {
        if(x<0){
            return false;
        }
            else if(rev==x){
                return true;
            }
        }

            return false;
    } 
};
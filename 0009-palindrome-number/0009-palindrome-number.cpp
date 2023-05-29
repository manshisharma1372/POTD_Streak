class Solution {
public:
    bool isPalindrome(int x) {
        
        long long temp=x;
        long long rev=0;
         if(x<0){
                return false;
            }
         while(temp!=0){
             int last_digit=temp%10;
             rev=rev*10+last_digit;
             temp=temp/10;
             
         }
        
        if(rev>-pow(2,31) && rev<pow(2,31)-1){
           
                if(rev==x){
                return true;
            }
        }
        return false;
    }
};
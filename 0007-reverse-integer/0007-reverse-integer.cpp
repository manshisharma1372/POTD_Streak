class Solution {
public:
    int reverse(int x) {
        bool is_negative=false;
        int temp=x;
        int rev=0;
        if(temp<=INT_MIN){
            return 0;
        }
        //to handle negative no
        if(temp<0){
            is_negative=true;
            temp=-1*temp;
        }
        
        while(temp!=0){
            
            if(rev>INT_MAX/10){
                return 0;
            }
            int last_digit=temp%10;
            rev=rev*10+last_digit;
            temp=temp/10;
            
        }
        if(is_negative==true){
        return -1*rev;
        }
        return rev;
        
    }
};
class Solution {
public:
    string largestOddNumber(string s) {
        
        //only last digit matters
        int j=-1;
        for(int i=s.size()-1;i>=0;i--){
            int nums=(int)(s[i]-'0');
            if(nums%2!=0) //it is odd store its index and break
            {
                j=i;
                break;
            }
        }
        if(j==-1){
            return "";
        }
        string ans="";
        for(int i=0;i<=j;i++){
            ans+=s[i];
        }
        return ans;
    }
};
class Solution {
public:
    
    int expandAroundIndex(string s,int left,int right){
        
        int count=0;
        
        //jab tak match krega tb tak count inc krna hai and left piche and right aage bhi krna hai but dhyan rhe left<0 na ho and right>s li length na ho
        while(left>=0 && right<s.length() && s[left]==s[right]){
            count++;
            left--;
            right++;
        }
        return count;
        
    }
    
    int countSubstrings(string s) {
        
        int totalcount=0;
        int n=s.length();
        
        for(int center=0;center<n;center++){
            
            //odd
            
            int oddans=expandAroundIndex(s,center,center);
totalcount=totalcount+oddans;
            
            //even
            
            int evenans=expandAroundIndex(s,center,center+1);
            totalcount=totalcount+evenans;
            
        }
        return totalcount;
        
    }
};
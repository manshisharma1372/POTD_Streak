class Solution {
public:
    int lengthOfLongestSubstring(string s) {       
        
        /*
        map<char,int> m;
        int n=s.length();
        int ans=0;
        int l=0;
        for(int r=0;r<n;r++){
                m[s[r]]++;
            
            while(l<=r && m[s[r]]>1){
              m[s[l]]--;
                l++;
            }
            
            if( ans<(r-l+1)){
                ans=r-l+1;
            }
        }
        
        return ans;
        
        */
        
        
        //using set
        
        int n=s.size();
        
        int l=0;
        int ans=0;
        
        set<char> st;
        for(int r=0;r<n;r++){
            
            while(l<=r && st.find(s[r]) != st.end()){
                
                st.erase(s[l]);
                l++;
            }
            
            st.insert(s[r]);
            
            if(ans< (r-l+1)){
                ans=r-l+1;
            }
        }
        return ans;
    }
};
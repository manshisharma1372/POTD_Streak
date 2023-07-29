class Solution {
public:
    string removeDuplicates(string s) {
       
        /*
        string ans="";
        for(int i=0;i<s.length();i++){
            
            if(ans.length()>0){
               if(ans[ans.length()-1]==s[i]){
                ans.pop_back();
            }
                 else{
                ans.push_back(s[i]);
            }
            }
          else{
              ans.push_back(s[i]);
          }
           
        }
        return ans;
    }
    */
        
        
        
        /*
        
        //@method 2
        
         string ans="";
        for(int i=0;i<s.length();i++){
           if(ans.length() >0 && ans[ans.length()-1]==s[i]){
                ans.pop_back();
            }
                 else
                 {
                ans.push_back(s[i]);
                 }
           
        }
        return ans;
    }
    */
        
      // @method 3 stack
        
     stack<char> st;
        string ans;
        for(int i=0;i<s.size();i++){
            
            char ch=s[i];
            
            if(!st.empty() && s[i]==st.top()){
                st.pop();
            }
            
            else{
                st.push(ch);
            }
        }
        
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }


};
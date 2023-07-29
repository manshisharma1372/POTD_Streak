class Solution {
public:
    int minSwaps(string s) {
       
        stack<char> st;
        int ans=0;
        
        for(auto ch:s){
            if(ch=='['){
                st.push(ch);
            }
            else{
                
                if(!st.empty() && st.top()=='['){
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }
            
        }
        
        while(!st.empty()){
            
            char a=st.top();
            st.pop();
            char b=st.top();
            st.pop();
            if(a==b){
                ans+=1;
            }
            else{
                ans+=2;
            }
        }
        
        return ans/2;
        
    }
};
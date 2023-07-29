class Solution {
public:
    
    vector<int> prevSmallerElement(vector<int> &input){
        
        stack<int> s;
        s.push(-1);
        vector<int> ans(input.size());
        
        
        //left to rightb traverse
        for(int i=0;i<input.size();i++){
            
            int curr=input[i];
            
            while(s.top()!=-1 && input[s.top()]>=curr){
                s.pop();
            }
            
            //smaller elm so store it
            
            ans[i]=s.top();
            
            //push curr elm index
            
            s.push(i);
        }
        return ans;
        
    }
    
     vector<int> nextSmallerElement(vector<int> &input){
         
         stack<int> st;
         st.push(-1);
         vector<int> ans(input.size());
         for(int i=input.size()-1;i>=0;i--){
             
             int curr=input[i];
             
             while(st.top()!=-1 && input[st.top()]>=curr){
                 st.pop();
             }
             
             ans[i]=st.top();
             st.push(i);
         }
             
            return ans; 
         
        
    }
    
    int largestRectangleArea(vector<int>& heights) {
        
        //prevsmaller elm
        vector<int> prev= prevSmallerElement(heights);
        vector<int> next=nextSmallerElement(heights);
        
        int maxArea=INT_MIN;
        int size=heights.size();
        
        for(int i=0;i<heights.size();i++){
            
            int len=heights[i];
            
            if(next[i]==-1){
                next[i]=size;
            }
            
            int width=next[i]-prev[i]-1;
            
            int area=len*width;
            maxArea=max(maxArea,area);
        }
        
        return maxArea;
        
    }
};
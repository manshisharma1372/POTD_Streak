class Solution {
public:
    int strStr(string str, string str1) {
        int ans;
       auto found = str.find(str1);
       if (found != string::npos)
            ans= found;
        
        return ans;
   
    }
};
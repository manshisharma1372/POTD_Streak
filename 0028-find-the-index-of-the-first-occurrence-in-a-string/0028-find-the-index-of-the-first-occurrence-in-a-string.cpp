class Solution {
public:
    int strStr(string str, string str1) {
        
        /*
       int ans=-1;
       auto found = str.find(str1);
       if (found != string::npos)
            ans= found;
        
        return ans;
        */
        
        int n=str.size();
        int m=str1.size();
        
        for(int i=0;i<=n-m;i++){
            for(int j=0;j<m;j++){
                if(str1[j] != str[i+j]){
                    break;
                }
                if(j==m-1){
                    return i;
                }
            }
        }
   return -1;
    }
};
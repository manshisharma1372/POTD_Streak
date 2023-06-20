class Solution {
public:
    string reverseVowels(string s) {
        
        int l=0;
        int h=s.size()-1;
        vector<char> arr={'a','e','i','o','u','A','E','I','O','U'};
        while(l<h){
            
                if(find(arr.begin(),arr.end(),s[l])!=arr.end() && find(arr.begin(),arr.end(),s[h])!=arr.end()){
                    swap(s[l],s[h]);
                    l++;
                    h--;
                }
                else if(find(arr.begin(),arr.end(),s[l])==arr.end()){
                    l++;
                }
                else{
                    h--;
                }
            }            
        
        return s;
        
    }
};
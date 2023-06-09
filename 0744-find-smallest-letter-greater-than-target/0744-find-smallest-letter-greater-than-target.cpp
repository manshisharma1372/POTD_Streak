class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int s=0;
        int e=letters.size()-1;
        int ans=0;
        int mid=s+(e-s)/2;
        while(s<=e){
            
            if(letters[mid]==target && mid+1<letters.size()){
                s=mid+1;

            }
           else if(letters[mid]>target){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
            
        }
        return letters[ans];
    }
};
class Solution {
public:
    int maxArea(vector<int>& height) {
        
        //O(n^2)  --->TLE
        
        /*
        int n =height.size();
         int ans=0;
       for(int i =0;i<n;i++){
          for(int j=i+1;j<n;j++){
              
              int diff_between_two_poles=j-i;
              
              
           int area=diff_between_two_poles*min(height[j],height[i]);
           ans=max(ans,area);
       }
     }
return ans;

*/
        int n=height.size();
        int l=0;
        int r=n-1;
        int ans=0;
        while(l<r){
            int diff_between_two_poles=r-l;
            int area=diff_between_two_poles*min(height[r],height[l]);
            ans=max(ans,area);
            if(height[l]<height[r]){
                l++;
            }
            else if(height[r]<height[l])
            {
                r--;
            }
            else{
                l++;
                r--;
            }
            
        }

            return ans;

    }
};
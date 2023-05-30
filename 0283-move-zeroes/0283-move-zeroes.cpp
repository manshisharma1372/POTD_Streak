class Solution {
public:
    void moveZeroes(vector<int>& a) {
         vector<int> temp;
        int n=a.size();
    for(int i=0;i<n;i++){
      if (a[i] != 0) {
        temp.push_back(a[i]);
      }
    }
        a.clear();
        for(int j=0;j<temp.size();j++){
            a.push_back(temp[j]);
        }
       
       for(int k=temp.size();k<n;k++){
           a.push_back(0);
       }
   
    }
};
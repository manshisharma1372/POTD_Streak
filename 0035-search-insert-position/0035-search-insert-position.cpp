class Solution {
public:
    int searchInsert(vector<int>& arr, int m) {
	int n=arr.size();
	int start=0;
	int end=n-1;
	int ans=n;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]>=m){
			ans=mid;
			end=mid-1;

		}
		else{
			start=mid+1;
		}
	}
	return ans;

    }
};
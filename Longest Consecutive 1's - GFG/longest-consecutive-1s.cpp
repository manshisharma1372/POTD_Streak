//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        // code here
         vector<int> v;

        while(N>0)

        {

            if(N%2==0)

            {

                v.push_back(0);

            }

            else

            {

                v.push_back(1);

            }

            N=N/2;

        }
        int curr=0;
        int res=0;
        for(int i=0;i<v.size();i++){
            
            if(v[i]==0){
                curr=0;
            }
            
            else{
                curr++;
                res=max(res,curr);
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends
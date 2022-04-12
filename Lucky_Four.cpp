#include <iostream>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count =0;
	    while(n!=0){
	        int rem = n%10;
	        if(rem==4)
	            count+=1;
	        n=n/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}

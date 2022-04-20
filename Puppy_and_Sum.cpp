            
#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
	while(t--){
	    int d,n; 
        cin>>d>>n;
	    int temp;
	    while(d--){
	        temp=(n*(n+1))/2;
	        n=(n*(n+1))/2;
	    }
	    cout<<temp<<endl;
	}
	return 0;
}

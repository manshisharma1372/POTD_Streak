#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N,X,P;
	    cin>>N>>X>>P;
    
        if(((3*X)-(N-X))>=P){
        cout<< "pass"<<endl;
        }
     else{
    cout<< "fail"<<endl;
         }
    }
	return 0;

}
#include <iostream>
using namespace std;
int main() {
	int t;
    cin>>t;
    while(t--){
        int x,d;
        cin>>x;
        d=x%4;
       if(d==0){
       cout<<"North"<<endl;
        }
        else if (d==1)
        {
            cout<<"East"<<endl;
        }
        else if (d==2)
        {
            cout<<"South"<<endl;
        }
        else{
            cout<<"West"<<endl;
        }
        
        
    
    }
	return 0;
}
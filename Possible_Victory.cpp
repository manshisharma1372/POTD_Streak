#include <iostream>
using namespace std;

int main() {
	int R,O,C;
    cin>>R>>O>>C;
    int over_left=20-O;
    int max_run=over_left*36;
    int total_score=C+max_run;
    if(total_score>R){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
	return 0;
}

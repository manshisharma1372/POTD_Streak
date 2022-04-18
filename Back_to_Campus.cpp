#include<bits/stdc++.h>
using namespace std;
#include <cmath>
int main() {
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int rem=n%k;
    if(rem!=0){
        cout<<(n/k)+1<<endl;
    }
    else{
        cout<<(n/k)<<endl;
    }
}
return 0;
}
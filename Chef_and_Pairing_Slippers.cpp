#include<bits/stdc++.h>
#include <algorithm>  
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int n,l,x;
    cin>>n>>l>>x;
    int r=n-l;
    int slipper=min(r,l);
    int rs=slipper*x;
    cout<<rs<<endl;

}
return 0;
}
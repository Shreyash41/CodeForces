#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int c=0;
	    while(n){
	        c++;
	        n=n&(n-1);
	    }
	    cout<<c-1<<"\n";
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
long long int M,p,t;
#define power log(M)
#define distance M-pow(2,p)

int main() {
	cin>>t>>M;
	while(t--){
	    int c = 0;
	    while(M){
	        p = power/log(2);
	        M = distance;
	        if(M != 0){
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}

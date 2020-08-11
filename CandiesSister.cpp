#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n<=2){
			cout<<0<<endl;
		}
		else if(n%2==1){
			cout<<n/2<<endl;
		}
		else{
			cout<<((n/2)-1)<<endl;
		}
	}
	return 0;
}
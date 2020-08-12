#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("Output.txt","w",stdout);
    #endif
	ll t;
	cin>>t;
	while(t--){
		ll x,y,n;
		cin>>x>>y>>n;
		if(n-n%x+y <= n){
			cout<<(n-n % x+y)<<endl;
		}
		else{
			cout<<(n-n % x-(x-y))<<endl;
		}
	}
	return 0;
}
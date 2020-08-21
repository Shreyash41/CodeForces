#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("Output.txt","w",stdout);
    #endif
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		ll ans = min(2,n-1)*m;
		cout<<ans<<endl;
	}
	return 0;
}
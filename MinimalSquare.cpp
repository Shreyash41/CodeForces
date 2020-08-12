#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
		#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	ll n;
	cin>>n;
	ll a,b,ans;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		ans = min(pow(max(2*b,a),2),pow(max(2*a,b),2));
		cout<<ans<<"\n";
	}
	return 0;
}
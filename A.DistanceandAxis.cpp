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
		ll n,k,b,ans;
		cin>>n>>k;
		if(k>n){
			cout<<k-n<<endl;
		}
		else if(n%2 != k%2){
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}
	return 0;
}
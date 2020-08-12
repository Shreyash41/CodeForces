#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	ll t;
	cin>>t; 
	while(t--){
		ll n;
		cin>>n;
        vector<ll>ans;
		ll power = 1;
		while(n > 0){
			if(n%10>0){
				ans.push_back((n%10)*power);
			}
			n = n/10;
			power *= 10;
		}
        cout<<ans.size()<<endl;
        for(auto number : ans) cout<<number<<" ";
        cout<<endl;
	}
	return 0;
}

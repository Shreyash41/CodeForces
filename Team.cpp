#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int w;
	cin>>w;
	ll count =0;
	while(w--){
		ll p,s,t;
		cin>>p>>s>>t;
		if(p+s+t >= 2){
			count++;							
		}
	}
	cout<<count<<endl;
	return 0;
}
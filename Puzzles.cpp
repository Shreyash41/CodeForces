#include<bits/stdc++.h>
#include<algorithm>
#define ll long long int
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	ll n,m;
	cin>>n>>m;
	ll arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	sort(arr,arr+m);
	ll ans = arr[n-1] -arr[0];
	for(int i=1;i<=m-n	;i++){
		if(arr[i+n-1] - arr[i] < ans){
			ans = arr[i+n-1] -arr[i];
		}
	} 
	cout<<ans<<endl;
	return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	ll n,i;
	ll k=0,count=0;
	cin>>n>>k;
	ll arr[n];
	for(i =0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		if(arr[i]>=arr[k-1] && arr[i] > 0){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
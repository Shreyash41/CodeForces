#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("Output.txt","w",stdout);
    #endif
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int res = arr[n-1] - arr[0];
		for(int i=0;i<n-1;i++){
			res = min(arr[i+1]-arr[i],res); 
			//cout<<res<<"\n";
		}
		cout<<res<<"\n";
	}
	return 0;
}

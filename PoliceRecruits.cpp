#include<bits/stdc++.h>
#define  ll long long int
using namespace std; 
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	ll n;
	cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	ll sum = 0,count=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			sum+=arr[i];
		}
		else if(sum > 0){
			sum--;
		}
		else
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	ll n,i;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ll sum = 0,ans;
	int max = a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	for(int i=0;i<n;i++){
		sum += ans = max - a[i];
	}
	cout<<sum;
	return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int count=0;
	for(int i=0;i<n;i++){
		if(5 - arr[i] >= k){
			count++;
		}
	}
	cout<<(count/3)<<endl;
	return 0;
}
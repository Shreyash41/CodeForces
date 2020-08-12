#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int n=5;
	long long int arr[5];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<arr[3] - arr[0]<<" "<<arr[3] - arr[1]<<" "<<arr[3] - arr[2];
	return 0;
}
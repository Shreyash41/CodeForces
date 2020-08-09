#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int h,n;
	int count = 0;
	cin>>n>>h;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i] > h){
			count = count + 2;
		}
		if(arr[i] <= h){
			count++;
		}
	}
	cout<<count;
	return 0;
}
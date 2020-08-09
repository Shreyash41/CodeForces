#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int n;
	int count = 0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i] > 0){
			count = 1;
		}
	}
	if(count == 1){
		cout<<"HARD";
	}
	else
	{
		cout<<"EASY";
	}
	return 0;
}
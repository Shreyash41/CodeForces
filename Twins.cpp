#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("Output.txt","w",stdout);
    #endif
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int half = 0;
	for(int i=0;i<n;i++){
		half = half + arr[i];
	}
	half = half/2;
	//cout<<half<<endl;
	sort(arr,arr+n,greater<int>());
	int res=0,curr_sum=0;
	for(int i=0;i<n;i++){
		curr_sum+=arr[i];
		res++;
		if(curr_sum>half){
			break;
			// cout<<res;
		}
	}
	cout<<res<<endl;
	return 0;
}
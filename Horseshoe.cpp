#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int arr[5],count=0;
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	sort(arr,arr+5);
	for(int i=0;i<5;i++){
		if(arr[i]==arr[i+1]){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
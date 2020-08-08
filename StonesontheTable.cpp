#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int n;
	cin>>n;
	char arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	int count =0;
	for(int i =0;i<n-1;i++){
		if(arr[i]==arr[i+1]){
			count++;
			//cout<<count<<endl;
		}
	}
	cout<<count<<endl;
	return 0;
}
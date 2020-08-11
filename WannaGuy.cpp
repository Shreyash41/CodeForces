#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    int arr[100];
	int n,i,p,q;
	cin>>n;
	cin>>p;
	int count=0;
	for(i=0;i<p;i++){
		cin>>arr[i];
	}
	cin>>q;
	for(int i=p;i<p+q;i++){
		cin>>arr[i];
	}
	sort(arr,arr+(p+q));
	for(int i=0;i<p+q;i++){
		if(arr[i] != arr[i+1]){
			count++;
		}
	}
	//cout<<count<<"\n";
	if(n==(count)){
		cout<<"I become the guy."<<"\n";
	}
	else{
		cout<<"Oh, my keyboard!"<<"\n";
	}
	return 0;
}
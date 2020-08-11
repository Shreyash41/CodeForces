#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

	int n;
	cin>>n;

	int count = 0;
	vector<ll>h(n),a(n);
	for(int i=0;i<n;i++){
		cin>>h[i]>>a[i]; 
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(h[i] == a[j]){
				count++;
				//cout<<h[i]<<" ";
			}
			if(a[i] == h[j]){
				count++;
				//cout<<a[i] << " ";
			}
		}
	}
	cout<<count<<"\n";
	return 0;
}
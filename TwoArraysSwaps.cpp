#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int t;
	cin>>t;
	while(t--){
		int n,k,i,j;
		cin>>n>>k;
		int a[n],b[n];
		int sum=0,sum1=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			//sum += a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
			//sum1+=b[j];
		}
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		int ans =0 ;
		for(int i=0;i<n;i++){
			if(i<k){
				ans += max(a[i],b[i]);
			}
			else{
				ans += a[i];
			}
		}
		cout<<ans<<" ";
	}
	return 0;
}
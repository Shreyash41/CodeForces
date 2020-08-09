#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int n;
	cin>>n;
	float arr[n],sum=0;
	double ans;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		sum = sum + arr[i];
	}
	ans = sum/n;
	cout<<ans<<setprecision(12);
	//printf("%.12f",ans);
	return 0;
}
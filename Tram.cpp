#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int n,a[1000],b[1000],max=0,ans,k,i;
	cin>>n;
	for(i = 0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	k = a[0];
	for(i = 0;i<n;i++){
		ans = b[i]-a[i]+k;
		k=ans;
		if(ans>max){
			max=ans;
		}
	}
	cout<<max<<"\n";
	return 0;
}
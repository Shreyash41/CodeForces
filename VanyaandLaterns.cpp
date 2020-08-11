#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	long long int n,l,m,i,maxdist = 0;;
	double x,y,z,ans;
	cin>>n>>l;
	long long int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n-1;i++){
		//a[i] = abs(a[i]-a[i+1]);
		if(a[i+1]-a[i] > maxdist){
			maxdist = a[i+1]-a[i];
		}
	}
	//cout<<maxdist<<" ";
	x = maxdist/2.0;
	//cout<<x<<"\n";
	y = a[0] - 0.0;
	//cout<<y<<"\n";
	z = l-a[n-1];
	//cout<<z<<"\n";
	ans = max(y,z);
	//cout<<ans<<"\n";
	ans = max(ans,x);
	printf("%.10f\n",ans);
	return 0;
}
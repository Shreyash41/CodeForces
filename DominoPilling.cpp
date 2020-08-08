#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int n,m,ans;
	cin>>n>>m;
	ans = floor(n*m*0.5);
	cout<<ans;
	return 0;
}
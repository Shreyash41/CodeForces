#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int a,b;
	cin>>a>>b;
	int ans = (a*b-1)/(b-1);
	cout<<ans<<endl;
	return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    fastio;
	int a,b,c,ans;
	cin>>a>>b>>c;
		ans = a+b+c;
		ans = max(ans,a+b*c);
		ans = max(ans,a*(b+c));
		ans = max(ans,a*b*c);
		ans = max(ans,(a+b)*c);
		ans = max(ans,(a*b)+c);
		cout<<ans<<endl;
	return 0;
}
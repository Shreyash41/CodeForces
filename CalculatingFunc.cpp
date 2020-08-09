#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	ll n,ans;
	cin>>n;
	if(n%2==0){
		n=n/2;
		cout<<n<<endl;
	}
	else if(n%2==1){
		n++;
		ans = n/2*(-1);
		cout<<ans<<endl;
	}
	return 0;
}
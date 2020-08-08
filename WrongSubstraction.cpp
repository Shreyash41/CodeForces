#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	ll n,k;
	cin>>n>>k;
	for(int i = 0;i<k;i++){
		if(n%10!=0){
			n=n-1;
		}
		else
		{
			n=n/10;
		}
	}
	cout<<n<<"\n";
	return 0;
}
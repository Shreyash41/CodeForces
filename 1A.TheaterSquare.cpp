#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	double n,m,a;
	cin>>n>>m>>a;
	long long int tot = (long long)ceil(n/a) * (long long)ceil(m/a);
	cout<<tot<<"\n";
	return 0;
}
/*---------------------Problem Set------------------------*/

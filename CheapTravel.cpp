#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int n,m,a,b;
	cin>>n>>m>>a>>b;

	if(m*a > b){
		int rem = (n%m)*a;
		if(rem > b){
			cout<<(n/m * b) + b;
		}
		else
		{
			cout<<(n/m * b) + rem;
		}
	}
	else
		cout<<(n*a);
	return 0;
}
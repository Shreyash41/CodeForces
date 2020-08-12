#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int a,b,ans;
	cin>>a>>b;
	if(a>b){
		swap(a,b);
	}
	b = (b-a)/2;
	cout<<a<<" "<<b;
	return 0;
}
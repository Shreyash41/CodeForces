#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int x;
	cin>>x;
	int count=0;
	while(x){
		x &= (x-1);
		count++;
	}
	cout<<count;
	return 0;
}
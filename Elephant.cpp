#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int x,div;
	cin>>x;
	long long int count =0;
	if(x%5!=0){
		div = x/5;
		div++;
	}
	else {
		div = x/5;
	}
	cout<<div<<endl;
	return 0;
}
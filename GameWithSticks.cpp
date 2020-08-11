#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int n,m;
	cin>>n>>m;
	n=min(n,m);
	if(n%2==0){
		cout<<"Malvika"<<endl;
	}
	else{
		cout<<"Akshat"<<endl;
	}
	return 0;
}
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	ll t,X=0,i;
	cin>>t;

	for(i=0;i<t;i++){
		string n;
		cin>>n;
		if(n[0]=='+'){
			++X;
		}
		if(n[0]=='-'){
			--X;
		}
		if(n[2]=='+'){
			X++;
		}
		if(n[2]=='-'){
			X--;
		}
	}
	cout<<X<<endl;
	return 0;
}
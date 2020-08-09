#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	ll n;
	cin>>n;
	int a[100000];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	int icount=0;
	for(int i=0;i<n;i++){
		if(a[i] != a[i+1]){
			icount++;
		}
	}
	cout<<icount<<endl;
	return 0;
}

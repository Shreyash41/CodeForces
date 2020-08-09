#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int n,p[100],q[100],i;
	cin>>n;
	int count =0;
	for(int i=0;i<n;i++){
		cin>>p[i]>>q[i];
	}
	for(int i=0;i<n;i++){
		if(q[i] - p[i] >=2){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
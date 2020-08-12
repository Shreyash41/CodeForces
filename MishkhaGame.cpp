#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    int n,m,c,misk=0,chris=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m>>c;
		if(m>c){
			misk++;
		}
		else if(c>m){
			chris++;
		}
	}
	if(misk>chris){
		cout<<"Mishka"<<endl;
	}
	else if(chris>misk){
		cout<<"Chris"<<endl;
	}
	else{
		cout<<"Friendship is magic!^^"<<endl;
	}
	return 0;
}
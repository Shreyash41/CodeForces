#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int n,k,w,mul,sum=0,sub=0;
	cin>>k>>n>>w;

	for(int i=1;i<=w;i++){
		mul = i*k;
		sum=sum+mul;
		sub = sum - n;
	}
	if(sub > 0){
		cout<<sub<<"\n";
	}
	else
	{
		cout<<"0"<<endl;
	}
	return 0;
}
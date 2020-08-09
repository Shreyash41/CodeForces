#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int i,n;
	cin>>n;
	for(i=0;i<n;i++){
		if(i%2==0){
			cout<<"I hate ";
		}
		else
		{
			cout<<"I love ";
		}
	if(i!=n-1){
		cout<<"that ";
	}
	else
	{
		cout<<"it ";
	}
}
	return 0;
}
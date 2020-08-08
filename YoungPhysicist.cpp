#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int t,a;
	int sum1=0,sum2=0,sum3=0;

	cin>>t;
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		sum1+=x;
		sum2+=y;
		sum3+=z; 
	}
	if(sum1 == 0 && sum2 == 0 && sum3 == 0){
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
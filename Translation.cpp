#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	string s,t;
	int sum=0;
	cin>>s>>t;
	int n = s.length();
	for(int i=0;i<n/2;i++){
		swap(s[i],s[n-i-1]);
	}
	if(s == t){
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
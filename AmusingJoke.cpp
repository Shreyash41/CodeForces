#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	string s,a,b,c;
	cin>>a>>b>>c;

	s = a+b;
	sort(s.begin(), s.end());
    sort(c.begin(), c.end());
	if(s==c){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
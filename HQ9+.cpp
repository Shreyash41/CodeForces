#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	string p;
	int count =0;
	cin>>p;
	for(int i=0;i<p.length();i++){
		if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
			count++;
			//cout<<count<<endl;
		}
	}
	if(count > 0){
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
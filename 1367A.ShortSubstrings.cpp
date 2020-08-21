#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("Output.txt","w",stdout);
    #endif
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int n = str.length();
		cout<<str[0];
		for(int i=1;i<n-1;i++){
			if(i%2 != 0){
				cout<<str[i];
			}
		}
		cout<<str[n-1]<<endl;
	}
	return 0;
}
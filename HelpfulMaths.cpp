#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	char s[100];
	cin>>s;
	int l = strlen(s);
	for(int i=0;i<l;i+=2){
		for(int j=0;j<l-i-2;j+=2){
			if(s[j]>s[j+2]){
				swap(s[j],s[j+2]);
			}
		}
	}
	cout<<s<<"\n";
	return 0;
}
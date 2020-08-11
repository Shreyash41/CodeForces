#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int i,n,count=0;
	char s[105];
	cin>>n>>s;
	for(i=0;i<n;i++){
		if(s[i] >= 65 && s[i] <= 90){
			s[i] = 97+s[i] - 65;
		}
	}
	sort(s,s+n);
	for(i=0;i<n;i++){
		if(s[i]!=s[i+1]){
			count++;
		}
		//cout<<s[i];
	}
	//cout<<count<<endl;
	if(count == 26){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
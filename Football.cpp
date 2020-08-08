#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	string s;
	cin>>s;
	int count =0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==s[i-1]){
			count++;
			if(count>=7){
				cout<<"YES"<<endl;
				return 0;
			}
		}
		else
		{
			count = 1;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}

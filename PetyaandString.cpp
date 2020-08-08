#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#define endl "\n"
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<s1.size();i++){
		s1[i]=	tolower(s1[i]);
		s2[i]=  tolower(s2[i]);
	}
	//cout<<s1<<"\n"<<s2;
	if(s1==s2){
		cout<<"0"<<"\n";
	}
	else if(s1<s2){
				cout<<"-1"<<endl;
			}
			else{
				cout<<"1"<<endl;
			}
	return 0;
}
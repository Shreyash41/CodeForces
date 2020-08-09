#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int n,anton=0,danik=0;
	cin>>n;
	char str[n];;
	cin>>str;
	for(int i=0;i<n;i++){
		if(str[i] == 'A'){
			anton++;
		}
		else if(str[i] == 'D'){
			danik++;
		}
	}
	//cout<<anton<<" "<<danik<<endl;
	if(anton < danik){
		cout<<"Danik"<<endl;
	}
	else if(anton > danik){
		cout<<"Anton"<<endl;
	}
	else
	{
		cout<<"Friendship"<<endl;
	}
	return 0;
}
#include<bits/stdc++.h>
#include<string.h>
#define endl "\n"
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    long long int t;
    cin>>t;
    while(t--){ 
		string str;
		int i;
		cin>>str;
		if(str.length()>10){
			cout<<str[0] << str.length()-2<<str[str.length()-1]<<endl;
		}
		else
		{
			cout<<str<<endl;
		}
}
return 0;
}
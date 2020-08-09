#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	string n,m,a;
	cin>>n>>m;
	for(int i=0;i<n.length();i++){
		if(n[i]==m[i]){
			n[i] = '0';
		}
		else{
			n[i] = '1';
		}
	}
	cout<<n<<endl;
	return 0;
}
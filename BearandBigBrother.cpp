#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int a,b,count=0;
	cin>>a>>b;
	for(int i=0;i<10;i++){
		if(a<=b){
			a = a*3;
			b = b*2;
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
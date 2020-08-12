#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int sum1 = pow(2,n),sum2 = 0;
		for(int i=1;i<n/2;i++){
			sum1 += pow(2,i);
		}
		for(int i=n/2;i<n;i++){
			sum2 += pow(2,i);
		}
		cout<<abs(sum1 - sum2)<<endl;
	}
	return 0;
}
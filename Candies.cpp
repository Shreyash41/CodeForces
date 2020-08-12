#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
   	while(t--){
		ll n,x;
		cin>>n;
		for(int k=2;k<35;k++){
			ll dino = pow(2,k)-1;
			if(n%dino){
				continue;
			}
			x = n/dino;
			break;	
		}
		cout<<x<<"\n";
	}
	return 0;
}
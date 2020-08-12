#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int n,m;
	cin>>n>>m;
	//int arr[100];
	for(int i=1;i<=n;i++){
		if(i%4 == 2){
			for(int j=1;j<m;j++){
				cout<<".";
			}
			cout<<"#\n";
		}
		else if(i%4 == 0){
			printf("#");
			for(int j=1;j<m;j++){
				cout<<".";
			}
			cout<<"\n";
		}
		else
		{
			for(int j=1;j<=m;j++){
				cout<<"#";
			}
			cout<<"\n";
		}
	}
	return 0;
}
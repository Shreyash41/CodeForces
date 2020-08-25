#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("Output.txt","w",stdout);
    #endif
	int n,m;
	cin>>n>>m;
	char arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	bool rang = false;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j] == 'C' || arr[i][j] == 'Y' || arr[i][j] == 'M'){
				rang = true;
				break;
			}
		}
	}
	if(rang == true){
		cout<<"#Color"<<endl;
	}
	else{
		cout<<"#Black&White"<<endl;
	}
	return 0;
}
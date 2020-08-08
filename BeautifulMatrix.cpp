#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int i,j,min;
	int arr[6][6];
	for(int i=1;i<6;i++){
		for(int j=1;j<6;j++){
			cin>>arr[i][j];
		}
	}
	int y;
	for(int i=1;i<6;i++){
		for(int j=1;j<6;j++){
			if(arr[i][j]==1){
				y = (abs(3-i)+abs(3-j));
				cout<<y;
			}
		}
	}
	return 0;
}
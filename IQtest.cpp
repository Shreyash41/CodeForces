#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int n,x,y;
	cin>>n;
	int arr[n];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	int count=0,count1=0;
	for(int i=1;i<=n;i++){
		if(arr[i]%2 == 1){
			count++;
			x=i;
		}
		else if(arr[i]%2 == 0){
			count1++;
			y=i;
		}
	}
	//cout<<count<<" "<<count1<<endl;
	if(count == 1){
		cout<<x<<"\n";
	}
	else if(count1==1)
	{
		cout<<y<<"\n";
	}
	return 0;
}
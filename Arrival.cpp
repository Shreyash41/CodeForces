#include <iostream>
#include<cmath>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int n;
	int maxvalue=0;
	int minvalue=101;
	int maxindex=0;
	int minindex=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x>maxvalue){
			maxindex=i;
			maxvalue=x;
		}
 		if(x<=minvalue){
			minindex=i;
			minvalue=x;
 		}
	}
	if(maxindex>minindex){
		cout<<(maxindex-1)+(n-minindex)-1;
	}
	else{
		cout<<(maxindex-1)+(n-minindex);
	}
	return 0;
}
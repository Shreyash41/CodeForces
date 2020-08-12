#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
	int x1,x2,x3;
	int low,mid,hi;
	cin>>x1>>x2>>x3;
	if(x1>x2) {   
      mid=x1;    
      low=x2;   
   	} 
   	else{
      mid=x2;  
      low=x1;  
   	} 
   	if(mid>x3){ 
      	hi=mid;    
      	if(low>x3){         
         	mid=low;                
         	low=x3;
      	}else {
         mid=x3;      
      	}         
   	}else hi=x3; 
   	//cout<<low<<" "<<mid<<" "<<hi<<" ";
	int dist1 = abs(mid-low);
	int dist2 = abs(hi-mid);
	int total = dist1 + dist2;
	cout<<total<<" ";
	return 0;
}
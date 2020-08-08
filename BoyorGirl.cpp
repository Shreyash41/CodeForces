#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    string str;
    int i,j,count =0;
    cin>>str;
    sort(str.begin(),str.end());
    for(i =0;i<str.length();i++){
            if(str[i]!=str[i-1]){
                count++;
            }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
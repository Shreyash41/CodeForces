#include<bits/stdc++.h>
#include <cstring> 
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    string ch;
    cin>>ch;
	int upper =0,lower=0;
 	for(int i = 0;i<ch.size();i++){
 		if(isupper(ch[i])){
 			upper++;
 		}else{
 			lower++;}}
    if(upper>lower){
    	char s;
	    for(int i=0;i<ch.size();i++){
	        s=toupper(ch[i]);
	        cout<<s;}
	}else{
    	char s;
	    for(int i=0;i<ch.size();i++){
	        s=tolower(ch[i]);
	        cout<<s;}}
    return 0;
}
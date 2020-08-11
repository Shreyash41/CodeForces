#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    long long int n,m,x,i,cnt=0,temp=1;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        cnt+=(x-temp+n)%n;
        temp=x;

    }
    cout<<cnt;
    return 0;
}
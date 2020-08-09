#include <bits/stdc++.h>
using namespace std;
int a[100];
int main() {
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    //int a[110];
    int n;
    cin>>n;
    int x[n];
    for (int i = 1; i <= n; ++i) {
        cin>>x[i];
    }
    for (int i = 1; i <= n; ++i) {
        a[x[i]]=i;
    }
    for (int i = 1; i <= n; ++i) {
        cout<<a[i]<<" ";
    }
    return 0;
}
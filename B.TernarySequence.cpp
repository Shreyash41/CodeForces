#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("Output.txt","w",stdout);
    #endif
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int x1, x2, y1, y2, z1, z2;
        cin >> x1 >> y1 >> z1;
        cin>> x2 >> y2 >> z2;
        ll sum = 0;
        int res = min(z1, y2);
        sum = sum + 2 * res;
        z1 = z1 - res;
        y2 = y2 - res;
        if (z1 > 0)
        {
            res = min(z1, z2);
            z1 = z1 - res;
            z2 = z2 - res;
        }
        if (z2 > 0)
        {
            res = min(z2, x1);
            x1 = x1 - res;
            z2 = z2 - res;
        }
        if (z2 > 0)
        {
            res = min(z2, y1);
            sum = sum - 2 * res;
            y1 = y1 - res;
            z2 = z2 - res;
        }
        cout << sum << endl;
    }

    return 0;
}
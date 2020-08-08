#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    string word="hello";
    string t;
    cin>>t;
    int l=t.length();
    int a=0,count=0;
    for(int i=0;i<l;i++)
    {
        if(t[i]==word[a])
        {
           a++;
            count++;
        }
    }
    if(count==5)
    {
       cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
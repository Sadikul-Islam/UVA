#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long t,n,a,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        a=n*567;
        a=a/9;
        a=a+7492;
        a=a*235;
        a=a/47;
        a=a-498;
        a=a/10;
        a=a%10;
        cout<<abs(a)<<endl;
    }


    return 0;
}

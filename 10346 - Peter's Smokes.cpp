#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k,sum,a;
    while(cin>>n>>k)
    {
        a=sum=n;
        while(a>=k)
        {
            sum=sum+a/k;
            a=a/k+a%k;
        }
        cout<<sum<<endl;
    }

    return 0;
}

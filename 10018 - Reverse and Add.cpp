#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long t,n,i,re,a,temp;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        a=n;
        re=0;
        while(a!=0)
        {
            re=re*10;
            re=re+a%10;
            a=a/10;
        }
        n=n+re;
        a=n;
        re=0;
        while(a!=0)
        {
            re=re*10;
            re=re+a%10;
            a=a/10;
        }
        temp=1;
        while(n!=re)
        {
            n=n+re;

            a=n;
            re=0;
            while(a!=0)
            {
                re=re*10;
                re=re+a%10;
                a=a/10;
            }
            temp++;
        }
        cout<<temp<<" "<<re<<endl;
    }

    return 0;
}

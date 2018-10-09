#include<bits/stdc++.h>
using namespace std;
long long sum(long long n)
{
    long long a,sum=0;
    while(n!=0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;

    }
    return sum;
}
int main ()
{
    long long n,b,c,d;
    while(cin>>n)
    {

        if(n==0)
            break;
        else
        {
            b=sum(n);
            c=sum(b);
            d=sum(c);
            cout<<d<<endl;
        }
    }

    return 0;
}

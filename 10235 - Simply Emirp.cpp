#include<bits/stdc++.h>
using namespace std;
long long prime (long long x)
{
    long long i,flag=1;
    for(i=2; i<=x/2; i++)
    {
        if(x%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}

int main ()
{
    long long n,x,re,y,a;
    while(cin>>n)
    {
        x=prime(n);
        if(x==1)
        {
            a=n;
            re=0;
            while(a!=0)
            {
                re=re*10;
                re=re+a%10;
                a=a/10;
            }
            y=prime(re);
            if(re==n)
            {
                 cout<<n<<" is prime."<<endl;
            }
            else if(y==1)
            {
                cout<<n<<" is emirp."<<endl;

            }
            else
            {
                cout<<n<<" is prime."<<endl;
            }

        }
        else
        {
            cout<<n<<" is not prime."<<endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,n,i,sum=0,j,cas=1;
    cin>>n;
    for(j=1; j<=n; j++)
    {
        cin>>a>>b;
        if(a%2==1 && b%2==1)
        {
            for(i=a; i<=b; i=i+2)
            {
                sum=sum+i;
            }
        }
        else if(a%2==1 && b%2==0)
        {
            for(i=a; i<b; i=i+2)
            {
                sum=sum+i;
            }
        }
        else if(a%2==0 && b%2==1)
        {
            for(i=a+1; i<=b; i=i+2)
            {
                sum=sum+i;
            }
        }
        else
        {
            for(i=a+1; i<=b-1; i=i+2)
                sum=sum+i;
        }
        cout<<"Case "<<cas<<": "<<sum<<endl;
        sum=0;
        cas++;
    }

    return 0;
}

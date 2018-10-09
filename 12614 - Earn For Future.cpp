#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long t,n,a,i,temp,j,cases=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        temp=0;
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cin>>a;
            if(temp<a)
            {
                temp=a;
            }
        }
        cases++;
        cout<<"Case "<<cases<<": "<<temp<<endl;
    }

    return 0;
}

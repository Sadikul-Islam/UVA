#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    long long n,i,sum,x;
    while(cin>>n)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            x=pow(i,3);
            sum=sum+x;
        }
        cout<<sum<<endl;
    }

    return 0;
}

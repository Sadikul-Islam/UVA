#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,ans,j=0;
    while(cin>>n)
    {
        if(n<0)
            break;
        for(i=0;i<=n;i++)
        {
            if(pow(2,i)>=n)
            {
                ans=i;
                break;
            }
        }
        j++;
        cout<<"Case "<<j<<": "<<ans<<endl;
    }

    return 0;
}

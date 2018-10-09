#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long amp,fre,i,t,j,k,l,arr[]= {1,22,333,4444,55555,666666,7777777,88888888,999999999};
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>amp>>fre;
        for(j=1; j<=fre; j++)
        {
            for(k=0; k<amp; k++)
            {
                cout<<arr[k]<<endl;
            }
            for(l=amp-2; l>=0; l--)
            {
                cout<<arr[l];
                if(i==t && j==fre && k==amp && l==0)
                    break;
                cout<<endl;
            }

            cout<<endl;
        }
    }

    return 0;
}

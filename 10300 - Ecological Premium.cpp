#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long test,farmer,sizee,animal,degree,i,j,k,sum;
    while(cin>>test)
    {

        for(i=1;i<=test;i++)
        {
            sum=0;
            cin>>farmer;
            for(j=1;j<=farmer;j++)
            {
                cin>>sizee>>animal>>degree;
                sum=sum+(sizee*degree);
            }
            cout<<sum<<endl;
        }

    }

    return 0;
}

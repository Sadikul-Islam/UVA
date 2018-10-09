#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double f,c;
    int t,i,celcius,farenhite;
    cin>>t;
    for(i=1;i<=t;i++)
    {
       cin>>celcius>>farenhite;
       f=((9.0/5.0)*celcius)+32;
       f=f+farenhite;
       c=((f-32)*5)/9.0;
       cout<<"Case "<<i<<": ";
       printf("%.2lf\n", c);
    }


    return 0;
}

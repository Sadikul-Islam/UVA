#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n,k,p,i,t,c=0,temp;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>k>>p;
        temp=k+p;
        while(temp>n)
            temp=temp-n;
        c++;
        cout<<"Case "<<c<<": "<<temp<<endl;
    }


    return 0;
}

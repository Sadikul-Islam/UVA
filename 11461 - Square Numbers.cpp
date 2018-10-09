#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long a,b,i,temp,c;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        temp=0;
        for(i=a; i<=b; i++)
        {
            c=sqrt(i);
            if(c*c==i)
                temp++;
        }
        cout<<temp<<endl;
    }

    return 0;
}

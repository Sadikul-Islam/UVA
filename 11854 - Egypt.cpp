#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long a,b,c,d;
    while(cin>>a>>b>>c)
    {
        if(a==0 && b==0 && c==0)
            break;
        if(a*a+b*b==c*c)
            cout<<"right"<<endl;
        else if (b*b+c*c==a*a)
            cout<<"right"<<endl;
        else if(a*a+c*c==b*b)
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }

    return 0;
}

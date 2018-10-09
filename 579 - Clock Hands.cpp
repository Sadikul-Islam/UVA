#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double h,m,a,b,c,d;
    char ch;
    while(cin>>h>>ch>>m)
    {
        if(h==0 && m==0)
            break;
        a=abs((0.5*(60*h+m)));
        b=abs(6*m);
        c=abs(a-b);
        if(c>180)
        {
            d=360-c;
        }
        else
        {
            d=c;
        }
        printf("%.3lf\n", d);
    }

    return 0;
}

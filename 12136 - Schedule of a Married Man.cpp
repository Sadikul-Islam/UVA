#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int h,m,a,b,c,d;
        scanf("%d:%d",&h,&m);
        a=h*100+m;
        scanf("%d:%d",&h,&m);
        b=h*100+m;
        scanf("%d:%d",&h,&m);
        c=h*100+m;
        scanf("%d:%d",&h,&m);
        d=h*100+m;
        if (d<a || c>b)
            printf("Case %d: Hits Meeting\n",i);
        else
            printf("Case %d: Mrs Meeting\n",i);
    }
    return 0;
}

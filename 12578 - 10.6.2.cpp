#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        double l,a,b,c,d;
        cin>>l;
        a=(M_PI*(l*l))/25;
        b=(3*(l*l))/5;
        c=b-a;
        printf("%.2lf %.2lf\n", a ,c);
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double x,n,p,k;
    while(cin>>n>>p)
    {
        x=pow(p,1.0/n);
        printf("%.0lf\n",x);

    }
    return 0;
}

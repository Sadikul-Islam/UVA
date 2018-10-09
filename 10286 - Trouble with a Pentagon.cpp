#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    double f,l,a;
    while(cin>>f)
    {
        a=sin(108*M_PI/180)/sin(63*M_PI/180);
        l=a*f;
        printf("%.10f\n", l);
    }

    return 0;
}

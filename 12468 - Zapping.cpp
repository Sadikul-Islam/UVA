#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t=200,a,b;
    while (t--)
    {
        cin>>a>>b;
        if (a==-1 && b==-1)
            break;
        a=abs(a-b);
        if (a>50) a=100-a;
        cout<<a<<endl;
    }

    return 0;
}

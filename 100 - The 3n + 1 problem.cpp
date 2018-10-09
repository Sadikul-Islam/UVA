#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long a,b,i,j,temp,sum,x;
    while(cin>>a>>b)
    {
        cout<<a<<" "<<b<<" ";
        if(a>b)
        {
            swap(a,b);
        }
        sum=0;
        for(i=a; i<=b; i++)
        {
            x=i;
            temp=1;
            while(x!=1)
            {
                if(x%2==1)
                    x=3*x+1;
                else
                    x=x/2;
                temp++;
            }
            if(temp>=sum)
                sum=temp;
        }

        cout<<sum<<endl;
    }
    return 0;
}

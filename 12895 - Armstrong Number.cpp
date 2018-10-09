#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    long long t,base,i,n,power,value,temp,sum=0;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        power=0;
        temp=n;
        while(temp != 0)
        {
            temp=temp/10;
            power++;
        }
        temp=n;
        sum=0;
        while(temp != 0)
        {
            base=temp%10;
            value=round(pow(base,power));
            sum=sum+value;
            temp=temp/10;
        }
        if(sum==n)
        {
            cout<<"Armstrong"<<endl;
        }
        else

        {
            cout<<"Not Armstrong"<<endl;
        }
    }

    return 0;
}

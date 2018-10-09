#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    long long n1,n2,rem1,rem2,temp,a,add;
    while(cin>>n1>>n2)
    {
        if(n1==0 && n2==0)
        {
            break;
        }
        temp=0;
        add=0;
        while(n1>0 || n2>0)
        {
            rem1=n1%10;
            n1=n1/10;
            rem2=n2%10;
            n2=n2/10;
            if((rem1+rem2)+add>9)
            {
                temp++;
                add=1;
            }
            else
            {
                add=0;
            }
        }
        if(temp==0)
        {
            cout<<"No carry operation."<<endl;

        }
        else if(temp==1)
        {
            cout<<temp<<" carry operation."<<endl;
        }
        else
        {
            cout<<temp<<" carry operations."<<endl;
        }
    }

    return 0;

}

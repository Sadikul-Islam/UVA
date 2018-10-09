#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long a,b,c,d,e,f,g,h,i,suma;
    int sum[6];
    while(cin>>a>>b>>c>>d>>e>>f>>g>>h>>i)
    {
        sum[0]=b+c+d+e+g+i;
        sum[1]=b+c+d+f+g+h;
        sum[2]=a+b+e+f+g+i;
        sum[3]=a+b+d+f+h+i;
        sum[4]=a+c+e+f+g+h;
        sum[5]=a+c+d+e+h+i;
        suma=sum[0];
        for(i=1; i<=5; i++)
        {
            if(suma>sum[i])
            {
                suma=sum[i];
            }
        }
        if(suma==sum[0])
            cout<<"BCG ";
        else if(suma==sum[1])
            cout<<"BGC ";
        else if(suma==sum[2])
            cout<<"CBG ";
        else if(suma==sum[3])
            cout<<"CGB ";
        else if(suma==sum[4])
            cout<<"GBC ";
        else if(suma==sum[5])
            cout<<"GCB ";

        cout<<suma<<endl;
    }

    return 0;
}

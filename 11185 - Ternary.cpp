#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n,k,i,arr[100],j;;
    while(cin>>n)
    {
        if(n<0)
            break;
        else
        {
            for(i=0; ; i++)
            {

                arr[i]=n%3;
                n=n/3;
                if(n==0)
                    break;
            }
            for(j=i; j>=0; j--)
            {
                cout<<arr[j];
            }
            cout<<endl;
        }

    }

    return 0;
}

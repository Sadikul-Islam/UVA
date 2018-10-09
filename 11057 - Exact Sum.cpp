#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n,i,j,k,taka,sum,arr[10020],x,y;
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
                sort(arr,arr+n);
        cin>>taka;
        int i=0,j=n-1;
        while(i<j)
        {
            if(arr[i]+arr[j]<taka)
                i++;
            else if(arr[i]+arr[j]==taka)
            {
                x=i;
                y=j;
                i++;
                j--;
            }
            else
                j--;
        }
        cout<<"Peter should buy books whose prices are "<<arr[x]<<" and "<<arr[y]<<"."<<endl<<endl;
    }

    return 0;
}

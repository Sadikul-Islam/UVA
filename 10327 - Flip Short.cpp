#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int arr[1001],i,j,temp,k,n,m;
    while(cin>>n)
    {
        for(m=0; m<n; m++)
        {
            cin>>arr[m];
        }
        k=0;

        for(i=0; i<n; i++)
        {
            for(j=i; j<n-1; j++)
            {
                if(arr[i]>arr[j+1])
                {
                    k++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<k<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int arr[1001],i,j,temp,k,n,m,x,l;
    cin>>n;
    for(x=1;x<=n;x++)
    {
        cin>>l;
        for(m=0; m<l; m++)
        {
            cin>>arr[m];
        }
        k=0;

        for(i=0; i<l; i++)
        {
            for(j=i; j<l-1; j++)
            {
                if(arr[i]>arr[j+1])
                {
                    k++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<k<<" swaps."<<endl;
    }

    return 0;
}


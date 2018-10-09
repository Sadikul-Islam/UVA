#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,arr[60],i,j,k,temp,sum,cas=0;
    while(cin>>n)
    {
        if(n==0)
            break;
        sum=0;
        temp=0;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        k=sum/n;
        for(i=0; i<n; i++)
        {
            if(arr[i]>k)
            {
                for(j=k; j<arr[i]; j++)
                {
                    temp++;
                }
            }
        }
        cas++;
        cout<<"Set #"<<cas<<endl<<"The minimum number of moves is "<<temp<<"."<<endl<<endl;
    }

    return 0;
}

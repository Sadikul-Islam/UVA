#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int arr[60],i,j,temp,coun,n,t,cas=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        temp=0;
        coun=0;
    for(j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    for(j=0;j<n-1;j++)
    {
        if(arr[j]<arr[j+1])
        {
            temp++;
        }
        else if (arr[j]>arr[j+1])
            coun++;
    }
    cas++;
    cout<<"Case "<<cas<<": "<<temp<<" "<<coun<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,i,j,k,sum,temp,arr[1020],avg;
    float ans,b;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        sum=0;
        temp=0;
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
            sum=sum+arr[j];
        }
        avg=sum/n;
        for(k=0;k<n;k++)
        {
            if(arr[k]>avg)
                temp++;
        }
        ans=((float)temp/(float)n)*100;
        printf("%.3f", ans);
        cout<<"%"<<endl;
    }

    return 0;
}

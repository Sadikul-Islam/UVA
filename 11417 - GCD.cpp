#include<bits/stdc++.h>
using namespace std;
int GCD(int i, int j)
{
    int rem;
    while(j!=0)
    {
        rem=i%j;
        i=j;
        j=rem;
    }
    return i;
}

int main ()
{
    int i,j,G,N;
    while(cin>>N)
    {
        if(N==0)
            break;
        G=0;
        for(i=1; i<N; i++)
        {
            for(j=i+1; j<=N; j++)
            {
                G+=GCD(i,j);
            }
        }
        cout<<G<<endl;

    }

    return 0;
}

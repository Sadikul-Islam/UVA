#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,t;
    char nm[5];
    cin>>t;
    for(i=0;i<t;i++)
    {
        scanf("%3s-%4d",nm,&c);
        b=26*26*(nm[0]-'A')+26*(nm[1]-'A')+(nm[2]-'A');
        d=abs(b-c);
        if(d<=100)
            cout<<"nice"<<endl;
        else
            cout<<"not nice"<<endl;
    }
    return 0;
}


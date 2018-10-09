#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int salary1, salary2, salary3, i, T,cas=1;
    cin>>T;
    for(i=1; i<=T; i++)
    {
        cin>>salary1>>salary2>>salary3;

        if(salary1<salary2 && salary2<salary3 || salary1>salary2 && salary2>salary3)
            cout<<"Case "<<cas<<": "<<salary2<<endl;
        else if(salary2<salary1 && salary1<salary3 || salary2>salary1 && salary1>salary3)
            cout<<"Case "<<cas<<": "<<salary1<<endl;
        else if(salary1<salary3 && salary3<salary2 || salary1>salary3 && salary3>salary2)
            cout<<"Case "<<cas<<": "<<salary3<<endl;
            cas++;

    }

    return 0;
}

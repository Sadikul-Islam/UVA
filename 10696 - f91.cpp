#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
    if (n<=100)
        return f(f(n+11));
    else
        return n-10;
}
int main ()
{
    int n,x;
    while (cin>>n)
    {
    if(n==0)
    return 0;
    x=f(n);
    cout<<"f91("<<n<<") = "<<x<<endl;
    }

}

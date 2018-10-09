#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int temp,i,t,n,j,cases=0;
    string str;
    cin>>t;
    getchar();
    for(j=1;j<=t;j++)
    {
        getline(cin,str);
        n=str.length();
        temp=0;
        for(i=0; i<n; i++)
        {
            if(str[i]=='a' || str[i]=='d' || str[i]=='g' || str[i]=='j' || str[i]=='m' || str[i]=='p' || str[i]=='t' || str[i]=='w' || str[i]==' ')
                temp++;

            else if(str[i]=='b' || str[i]=='e' || str[i]=='h' || str[i]=='k' || str[i]=='n' || str[i]=='q' || str[i]=='u' || str[i]=='x')
                temp=temp+2;

            else if(str[i]=='c' || str[i]=='f' || str[i]=='i' || str[i]=='l' || str[i]=='o' || str[i]=='r' || str[i]=='v' || str[i]=='y')
                temp=temp+3;

            else if (str[i]=='s' || str[i]=='z')
                temp=temp+4;

        }
        cases++;
        cout<<"Case #"<<cases<<": "<<temp<<endl;
    }
    return 0;
}

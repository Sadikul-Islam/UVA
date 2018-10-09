#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int cases=1;
    string s;
    while(cin>>s)
    {
        if(s=="#")
            break;
        if(s=="HELLO")
            cout<<"Case "<<cases<<": "<<"ENGLISH"<<endl;
        else if(s=="HOLA")
            cout<<"Case "<<cases<<": "<<"SPANISH"<<endl;
        else if(s=="HALLO")
            cout<<"Case "<<cases<<": "<<"GERMAN"<<endl;
        else if(s=="BONJOUR")
            cout<<"Case "<<cases<<": "<<"FRENCH"<<endl;
        else if(s=="CIAO")
            cout<<"Case "<<cases<<": "<<"ITALIAN"<<endl;
        else if(s=="ZDRAVSTVUJTE")
            cout<<"Case "<<cases<<": "<<"RUSSIAN"<<endl;
        else
            cout<<"Case "<<cases<<": "<<"UNKNOWN"<<endl;

        cases++;
    }

    return 0;
}

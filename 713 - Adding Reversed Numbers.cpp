#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i,j;
    cin>>t;
    for(j=1; j<=t; j++)
    {
        string s1,s2,s3,s4;
        cin>>s1>>s2;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        if(s1.length()>s2.length())
            swap(s1,s2);

        int n1,n2,n3,j,sum,carry=0;
        n1=s1.length();
        n2=s2.length();

        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        carry=0;
        for(i=0; i<n1; i++)
        {
            sum=(s1[i]-'0'+s2[i]-'0')+carry;
            s3.push_back(sum%10+'0');
            carry=sum/10;
        }
        for(i=n1; i<n2; i++)
        {
            sum=(s2[i]-'0'+carry);
            s3.push_back(sum%10+'0');
            carry=sum/10;
        }
        if(carry)
            s3.push_back(carry+'0');
        reverse(s3.begin(),s3.end());
        reverse(s3.begin(),s3.end());
        n3=s3.length();
        int index=0,len;

        ///For Replace Zero Before String

        while(s3[index]=='0')
        {
            index++;
        }
            len=n3-index;
            s4=s3.substr(index,len);
        cout<<s4<<endl;
    }

    return 0;
}

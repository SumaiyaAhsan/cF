#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char s='+';  s='-';  s='*';
    char q='=';
    cin>>a>>s>>b>>q>>c;
    int s1=a+b;
    int s2=a-b;
    int s3=a*b;
    if(s=='+')
    {
        if(s1==c) cout<<"Yes"<<endl;
        else cout<<s1<<endl;  
    }
    else if(s=='-')
    {
        if(s2==c) cout<<"Yes"<<endl;
        else cout<<s2<<endl;  
    }
    else if(s=='*')
    {
        if(s3==c) cout<<"Yes"<<endl;
        else cout<<s3<<endl;  
    }
    
   
   
    return 0;
}
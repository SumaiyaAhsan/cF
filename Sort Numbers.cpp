#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<=b && a<=c )
    {
        if(b<c) cout<<a<<endl<<b<<endl<<c<<endl;
        else if(c<b) cout<<a<<endl<<c<<endl<<b<<endl; 
        else cout<<a<<endl<<b<<endl<<c<<endl;
        
     
    }
    else  if(b<=a && b<=c)
    {
        if(c<a) cout<<b<<endl<<c<<endl<<a<<endl;
        else if(a<b)cout<<b<<endl<<a<<endl<<c<<endl;
        else cout<<b<<endl<<c<<endl<<a<<endl;
        
    }
    else  if(c<=a && c<=b)
    {
        if(a<b ) cout<<c<<endl<<a<<endl<<b<<endl;
        else if(b<a) cout<<c<<endl<<b<<endl<<a<<endl;
        else cout<<c<<endl<<a<<endl<<b<<endl;
        
    }
    else{
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
 
    cout<<endl<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}
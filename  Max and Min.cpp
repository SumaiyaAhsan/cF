#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;cin>>a>>b>>c;
 if(a<=b && a<=c)
 {
    cout<<a<<" ";
    cout<<max(b,c)<<endl;
    
 }
 else if(b<=a && b<=c)
 {
    cout<<b<<" ";
    cout<<max(a,c)<<endl;
 }
 else if(c<=a && c<=b)
 {
    cout<<c<<" ";
  cout<<max(a,b)<<endl;
    
 }
    return 0;
}
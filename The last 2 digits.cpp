#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long s=(a*b)%100;
    s=(s*c)%100;
    s=(s*d)%100;
    cout<<setw(2)<<setfill('0')<<s<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    if(n==1)
    {
        cout<<"No"<<endl;
    }
    int count=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0 )
        {
            count++;
        }
    }
    if(count==0)cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
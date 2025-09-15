#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    
    while(t--)
    {
        long long f=1;
        int n;cin>>n;
        for(int i=n;i>=1;i--)
        {
          f=f*i;
        }
        cout<<f<<endl;
    }
    return 0;
}

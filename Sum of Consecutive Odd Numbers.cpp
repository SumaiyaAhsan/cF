#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int start=min(n,m);
        int end=max(n,m);
        int sum=0;
        for(int i=start+1;i<end;i++)
        {
            if(i%2!=0)
            {
               sum=sum+i;
            }
        }
        cout<<sum<<endl;

    }
    return 0;
}
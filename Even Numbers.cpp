#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int neg=-1;
    bool no_even=true;
    for(int i=1;i<=n;i++)
    {
         if(i%2==0)
         {
            cout<<i<<endl;
          no_even=false;
        }
    }
    if(no_even){
    cout<<neg<<endl;
    }
    
   
    return 0;
}
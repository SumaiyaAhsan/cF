#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    for(int row=n;row>0;row--)
    {
      for(int col=1;col<=n-row+1;col++)
      {
          cout<<"*";
      }
      cout<<endl;
    }

    return 0;
}
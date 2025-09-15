#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;cin>>N;
    for(int row=1;row<=N;row++)
    {
        for(int col=1;col<=N+row-1;col++)
        {
          if(col<=N-row)
          {
            cout<<" ";
          }
          else{ cout<<"*";}
        
        }
        cout<<endl;
    }
    

    return 0;
}


    



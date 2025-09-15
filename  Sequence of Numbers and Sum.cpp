#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true){
    int N,M;
    cin>>N>>M;
    int s=0;
    if(N<=0 || M<=0)
    {
        break;
    }   
    else{
        int start=min(N,M);
        int end=max(M,N);
        for(int i=start;i<=end;i++)
        {
            cout<<i<<" ";
            s=s+i;
        }
        cout<<"sum ="<<s<<endl;
    }
        
}
    return 0 ;
}

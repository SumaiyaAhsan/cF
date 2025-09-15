#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int cE=0,cO=0,cN=0,cP=0;
    for(int i=0;i<n;i++)
    {
      if(arr[i]%2==0) 
      {
        cE++;
      } 
      else{
          cO++;
      }
      if(arr[i]>0){
        cP++;
      }
      else if(arr[i]<0){
        cN++;
      }

    }
    cout<<"Even: "<<cE<<endl;
    cout<<"Odd: "<<cO<<endl;
    cout<<"Positive: "<<cP<<endl;
    cout<<"Negative: "<<cN<<endl;
    return 0;
}
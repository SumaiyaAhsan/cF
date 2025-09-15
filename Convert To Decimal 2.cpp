#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
   
    for(int i=0;i<n;i++)
    {
        deque<int>rem;
        int num=arr[i];
       while(num>0)
       {
           rem.push_front(num%2);
            num=num/2; 
       }
       int dec=0;
       for(int j=0;j<rem.size();j++)
       {
         dec=dec+rem[j]*pow(2,rem.size()-1-j);
       }
       cout<<dec<<endl;
    }
    return 0;
}
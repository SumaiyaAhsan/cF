#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max;
    for(int i=0;i<n;i++ )
    {
        max=arr[0];
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return 0;
}
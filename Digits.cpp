#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n--)
    {
        
        int digit;cin>>digit;
        int rem;
        if(digit==0)cout<<"0";
        bool first_d=true;
        while(digit!=0)
        {
            rem=digit%10;
            digit=digit/10;
            if(!first_d)cout<<" ";
            cout<<rem;
            first_d=false;
        }
        cout<<endl;
    }
    return 0;
}
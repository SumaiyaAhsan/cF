#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int y=n/365;
    int m=(n%365)/30;
    int r=(n%365);
    int d=r%30;
    cout<< y<<" years"<<endl<<m<<" months"<<endl<<d<<" days"<<endl;
    return 0;
}
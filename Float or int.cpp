#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;cin>>n;
    int integer_part=int(n);
    double fraction_part=n-integer_part;
    if(fraction_part==0)
    {
        cout<<"int "<<integer_part<<endl;
    }
    else{
        cout<<"float "<<integer_part<<" ";
        cout<<fixed<<setprecision(3)<<fraction_part<<endl;
    }
    return 0;
}
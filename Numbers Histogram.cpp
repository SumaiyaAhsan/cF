#include<bits/stdc++.h>
using namespace std;
void symbolprint(char ch,int element)
{
    if(element==0) return;
    cout<<ch;
    symbolprint(ch,element-1);
}
int main()
{
    char ch;cin>>ch;
    int n;cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
     
    for(int i=0;i<n;i++)
    {
       symbolprint(ch,v[i]);
       cout<<endl;
    }

    return 0;

}
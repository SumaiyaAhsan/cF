#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int a,b;cin>>a>>ch>>b;

   if(ch=='>')
   {
    if(a>b)
    {
        cout<<"Right"<<endl;
    }
    else{
        cout<<"Wrong"<<endl;
    }
   }
  else if(ch=='<')
   {
    if(a>b)
    {
        cout<<"Wrong"<<endl;
    }
    else if(a==b)
    {
        cout<<"Wrong"<<endl;
    }
    else{
        cout<<"Right"<<endl;
    }
   }
   else{
     if(ch=='=')
     {
        if(a==b)
        {
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
     }
   }
   
    return 0;
}